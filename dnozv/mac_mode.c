// Windows/macOS mode: each key keeps the same *action* on both OSes; only the shortcut sent changes.
// The Oryx layout holds the Windows shortcuts. In Mac mode the keycodes below are swapped for their
// macOS equivalents. Everything lives here so Oryx exports never conflict with it on merge.

#include "mac_mode.h"
#include "os_detection.h"

#define MAC_MODE_TOGGLE_KEY KC_F24
#define MAC_MODE_INDICATOR_LAYER 11
// LED under the toggle key (matrix [0,6], left half top row, inner column).
#define MAC_MODE_INDICATOR_LED 29

static const HSV WINDOWS_COLOR = {160, 228, 222}; // the layout's existing blue
static const HSV MAC_COLOR     = {0, 0, 255};     // white

typedef struct {
    uint16_t oryx;
    uint16_t mac;
} remap_t;

// Caught globally, not per position: each keycode appears once in the Oryx layout today.
// If one of them is later placed elsewhere in Oryx, it gets remapped there too.
static const remap_t remaps[] = {
    // Layer 7 (hold F): navigation
    {LGUI(LCTL(KC_LEFT)), LCTL(KC_LEFT)},              // desktop left
    {LGUI(LCTL(KC_RIGHT)), LCTL(KC_RIGHT)},            // desktop right
    {LCTL(KC_LEFT), LALT(KC_LEFT)},                    // word left
    {LCTL(KC_RIGHT), LALT(KC_RIGHT)},                  // word right
    {KC_HOME, LGUI(KC_LEFT)},                          // line start
    {KC_END, LGUI(KC_RIGHT)},                          // line end
    {KC_PSCR, LGUI(LSFT(KC_5))},                       // screenshot tool
    {LGUI(LSFT(KC_LEFT)), LCTL(LALT(LGUI(KC_LEFT)))},  // window to left monitor (Rectangle)
    {LGUI(LSFT(KC_RIGHT)), LCTL(LALT(LGUI(KC_RIGHT)))}, // window to right monitor (Rectangle)
    {LGUI(LSFT(KC_S)), LCTL(LGUI(LSFT(KC_4)))},        // region snip to clipboard
    {LGUI(KC_TAB), KC_MCTL},                           // task view -> Mission Control
    // Layer 0 (base)
    // Switch input language. F18 is bound in macOS to "Select the previous input source" instead of
    // the default Ctrl+Space, so Ctrl+Space stays free for apps (e.g. IDE autocomplete).
    {LALT(KC_LEFT_SHIFT), KC_F18},
    // Layer 6 (mouse)
    {KC_WWW_BACK, LGUI(KC_LBRC)},
    {KC_WWW_FORWARD, LGUI(KC_RBRC)},
};

// What was actually sent on press, so release undoes exactly that even if the mode flipped meanwhile.
static uint16_t held[ARRAY_SIZE(remaps)];

// Windows until the host is detected: OS_UNSURE, OS_LINUX and OS_WINDOWS all behave as Windows.
static bool is_mac = false;

bool mac_mode_is_mac(void) {
    return is_mac;
}

// Fires only when detection settles on a new OS (i.e. after a replug), so it overrides a manual toggle.
bool process_detected_host_os_user(os_variant_t os) {
    is_mac = (os == OS_MACOS || os == OS_IOS);
    return true;
}

bool mac_mode_process_record(uint16_t keycode, keyrecord_t *record) {
    if (keycode == MAC_MODE_TOGGLE_KEY) {
        if (record->event.pressed) {
            is_mac = !is_mac;
        }
        return false;
    }

    for (uint8_t i = 0; i < ARRAY_SIZE(remaps); i++) {
        if (remaps[i].oryx != keycode) {
            continue;
        }
        if (record->event.pressed) {
            if (!is_mac) {
                return true;
            }
            held[i] = remaps[i].mac;
            register_code16(held[i]);
            return false;
        }
        // Release is decided by what the press did, not by the current mode.
        if (held[i] == KC_NO) {
            return true;
        }
        unregister_code16(held[i]);
        held[i] = KC_NO;
        return false;
    }
    return true;
}

// Hooked at the _kb level, not rgb_matrix_indicators_advanced_user: the advanced hook runs per LED
// chunk, and Oryx's rgb_matrix_indicators_user repaints every LED after the last chunk, which
// overwrote the indicator. Calling Oryx's hook first guarantees we paint last.
// The Moonlander keyboard code doesn't define this hook; if ZSA adds one, the link fails loudly.
bool rgb_matrix_indicators_kb(void) {
    if (!rgb_matrix_indicators_user()) {
        return false;
    }
    if (keyboard_config.disable_layer_led || get_highest_layer(layer_state) != MAC_MODE_INDICATOR_LAYER) {
        return true;
    }
    RGB rgb = hsv_to_rgb(is_mac ? MAC_COLOR : WINDOWS_COLOR);
    // Same scaling as Oryx's layer colors, so the indicator follows the brightness keys.
    float f = (float)rgb_matrix_get_val() / UINT8_MAX;
    rgb_matrix_set_color(MAC_MODE_INDICATOR_LED, f * rgb.r, f * rgb.g, f * rgb.b);
    return true;
}
