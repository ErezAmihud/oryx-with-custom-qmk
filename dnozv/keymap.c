#include QMK_KEYBOARD_H
#include "version.h"
#include "mac_mode.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_211_221_219,
  HSV_159_230_221,
  HSV_76_219_179,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_ESCAPE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_PAUSE,       KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    CW_TOGG,        MT(MOD_LSFT, KC_A),LT(5, KC_S),    LT(6, KC_D),    LT(7, KC_F),    KC_G,           KC_TRANSPARENT,                                                                 KC_INSERT,      KC_H,           LT(8, KC_J),    LT(9, KC_K),    LT(10, KC_L),   MT(MOD_RSFT, KC_SCLN),KC_QUOTE,       
    KC_LEFT_SHIFT,  MT(MOD_LCTL, KC_Z),MT(MOD_LALT, KC_X),MT(MOD_LGUI, KC_C),KC_V,           KC_B,                                           KC_N,           KC_M,           MT(MOD_RGUI, KC_COMMA),MT(MOD_RALT, KC_DOT),MT(MOD_RCTL, KC_SLASH),KC_RIGHT_SHIFT, 
    TD(DANCE_0),    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  LALT(KC_LEFT_SHIFT),                                                                                                KC_MEH,         KC_RIGHT_SHIFT, MO(11),         KC_HYPR,        TD(DANCE_1),    TD(DANCE_2),    
    KC_BSPC,        KC_TAB,         KC_DELETE,                      KC_ENTER,       KC_ENTER,       LT(4, KC_SPACE)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_M,           KC_U,           KC_Y,           KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           LT(5, KC_R),    LT(6, KC_S),    LT(7, KC_T),    KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_L,           LT(8, KC_N),    LT(9, KC_E),    LT(10, KC_I),   KC_O,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, 
    TD(DANCE_3),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSLS,        
    KC_TRANSPARENT, KC_QUOTE,       KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           KC_SLASH,       
    KC_TRANSPARENT, MT(MOD_LSFT, KC_A),LT(5, KC_O),    LT(6, KC_E),    LT(7, KC_U),    KC_I,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_D,           LT(8, KC_H),    LT(9, KC_T),    LT(10, KC_N),   MT(MOD_RSFT, KC_S),KC_MINUS,       
    KC_TRANSPARENT, MT(MOD_LCTL, KC_SCLN),MT(MOD_LALT, KC_Q),MT(MOD_LGUI, KC_J),KC_K,           KC_X,                                           KC_B,           KC_M,           MT(MOD_RGUI, KC_W),MT(MOD_RALT, KC_V),MT(MOD_RCTL, KC_Z),KC_TRANSPARENT, 
    TD(DANCE_4),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_D,           KC_R,           KC_W,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_F,           KC_U,           KC_P,           KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           LT(5, KC_S),    LT(6, KC_H),    LT(7, KC_T),    KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_Y,           LT(8, KC_N),    LT(9, KC_E),    LT(10, KC_O),   KC_I,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_M,           KC_C,           KC_V,                                           KC_K,           KC_L,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
    TD(DANCE_5),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_PIPE,        
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSLS,        
    KC_TRANSPARENT, KC_LBRC,        KC_RBRC,        KC_LCBR,        KC_RCBR,        KC_LABK,                                        KC_RABK,        KC_MINUS,       KC_UNDS,        KC_EQUAL,       KC_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NUM,         KC_KP_SLASH,    KC_KP_ASTERISK, KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_7,           KC_8,           KC_9,           KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_1,           KC_2,           KC_3,           KC_KP_ENTER,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_DOT,      KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_0
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_MS_WH_UP,    KC_MS_UP,       KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_MS_ACCEL0,   KC_TRANSPARENT, KC_MS_ACCEL2,   KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_WWW_BACK,    KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_WWW_FORWARD, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_MS_ACCEL1,   KC_NO,                                          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_NO,          KC_NO,          KC_MS_WH_RIGHT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_BTN4,     KC_MS_BTN5,                     KC_MS_BTN3,     KC_MS_BTN2,     KC_MS_BTN1
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_TAB),   LGUI(LCTL(KC_LEFT)),KC_UP,          LGUI(LCTL(KC_RIGHT)),KC_PAGE_UP,     KC_PSCR,        
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_HOME,        LCTL(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       LCTL(KC_RIGHT), KC_END,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TAB,         LGUI(LSFT(KC_LEFT)),LGUI(LSFT(KC_S)),LGUI(LSFT(KC_RIGHT)),KC_PGDN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_TAB)
  ),
  [8] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_EXLM,        KC_SLASH,       KC_ASTR,        KC_PIPE,        KC_AMPR,        KC_PLUS,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_LEFT_ALT,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_GRAVE,       KC_LBRC,        KC_RBRC,        KC_LPRN,        KC_RPRN,        KC_EQUAL,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_TRANSPARENT, 
    KC_TILD,        KC_LCBR,        KC_RCBR,        KC_LABK,        KC_RABK,        KC_MINUS,                                       KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_F14,         KC_F15,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LALT(KC_F1),    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F11,                                         KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F12,                                                                         KC_TRANSPARENT, KC_NO,          KC_LEFT_ALT,    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_AUDIO_VOL_UP,KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MEDIA_STOP,  KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_PLAY_PAUSE,KC_AUDIO_MUTE,  KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_MEDIA_REWIND,KC_MEDIA_FAST_FORWARD,KC_AUDIO_VOL_DOWN,KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [11] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F24,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MAGIC_TOGGLE_NKRO,MU_NEXT,        MU_TOGG,        AU_TOGG,        KC_AUDIO_VOL_UP,KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_SAD,        RGB_SAI,        KC_TRANSPARENT, HSV_211_221_219,
    KC_TRANSPARENT, KC_MEDIA_STOP,  KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_PLAY_PAUSE,KC_AUDIO_MUTE,  KC_TRANSPARENT,                                                                 KC_TRANSPARENT, TOGGLE_LAYER_COLOR,RGB_TOG,        RGB_VAD,        RGB_VAI,        MOON_LED_LEVEL, HSV_159_230_221,
    QK_BOOT,        KC_TRANSPARENT, KC_MEDIA_REWIND,KC_MEDIA_FAST_FORWARD,KC_AUDIO_VOL_DOWN,KC_NO,                                          KC_TRANSPARENT, RGB_MODE_FORWARD,RGB_SPD,        RGB_SPI,        RGB_SLD,        HSV_76_219_179, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUD,        RGB_HUI,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [12] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [13] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F1,                                          KC_F4,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_ESCAPE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_F2,                                          KC_F5,          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_F13,         KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_F3,                                                                          KC_F6,          KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
    KC_F7,          KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_CTRL,   KC_F8,          KC_F9,                                                                                                          KC_F10,         KC_F11,         KC_RIGHT_CTRL,  KC_RIGHT_GUI,   KC_F16,         TD(DANCE_6),    
    KC_BSPC,        KC_TAB,         KC_DELETE,                      KC_F12,         KC_ENTER,       KC_SPACE
  ),
  [14] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TD(DANCE_7),    
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
};





extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {160,228,222}, {0,0,255}, {0,0,255}, {0,0,255}, {127,240,207}, {77,215,176}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,255}, {77,215,176}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,255}, {77,215,176}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,255}, {77,215,176}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,255}, {77,215,176}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,255}, {0,0,255}, {77,215,176}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,255}, {77,215,176}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,255}, {77,215,176}, {160,228,222}, {160,228,222}, {160,228,222}, {200,226,177}, {77,215,176}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,255}, {77,215,176}, {160,228,222}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,0}, {43,255,170}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [1] = { {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {77,215,176}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207}, {127,240,207} },

    [2] = { {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {188,207,184}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176} },

    [3] = { {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {160,228,222}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184}, {188,207,184} },

    [4] = { {0,0,0}, {77,215,176}, {77,215,176}, {0,0,0}, {0,0,0}, {0,0,0}, {77,215,176}, {77,215,176}, {160,228,222}, {0,0,0}, {0,0,0}, {77,215,176}, {77,215,176}, {160,228,222}, {0,0,0}, {0,0,0}, {77,215,176}, {77,215,176}, {160,228,222}, {0,0,0}, {0,0,0}, {77,215,176}, {77,215,176}, {160,228,222}, {0,0,0}, {0,0,0}, {77,215,176}, {77,215,176}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {77,215,176}, {77,215,176}, {0,0,0}, {0,0,0}, {0,0,0}, {77,215,176}, {77,215,176}, {160,228,222}, {0,0,0}, {0,0,0}, {77,215,176}, {77,215,176}, {160,228,222}, {0,0,0}, {0,0,0}, {77,215,176}, {77,215,176}, {160,228,222}, {0,0,0}, {0,0,0}, {77,215,176}, {77,215,176}, {160,228,222}, {0,0,0}, {0,0,0}, {77,215,176}, {77,215,176}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {0,0,0}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {77,215,176}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {77,215,176}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {160,228,222}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {160,228,222}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {160,228,222}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {160,228,222}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {160,228,222}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,170}, {43,255,170}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,170}, {160,228,222}, {43,255,170}, {0,0,0}, {0,0,0}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,0}, {0,0,0}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,0}, {0,0,0}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,255}, {160,228,222}, {0,0,255}, {0,0,0}, {0,0,0}, {43,255,170}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,0,0}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,0}, {0,0,0}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,0}, {0,0,0}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,0}, {0,0,0}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,0}, {0,0,0}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,0}, {0,0,0}, {160,228,222}, {160,228,222}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [10] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {245,241,189}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {245,241,189}, {245,241,189}, {0,0,0}, {0,0,0}, {0,0,0}, {245,241,189}, {245,241,189}, {0,0,0}, {0,0,0}, {245,241,189}, {245,241,189}, {245,241,189}, {0,0,0}, {0,0,0}, {0,0,0}, {245,241,189}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [11] = { {160,228,222}, {218,255,255}, {0,0,0}, {218,255,255}, {0,0,0}, {0,0,0}, {218,255,255}, {218,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,255}, {218,255,255}, {218,255,255}, {0,0,0}, {0,0,0}, {218,255,255}, {218,255,255}, {218,255,255}, {0,0,0}, {0,0,0}, {218,255,255}, {218,255,255}, {218,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,255}, {0,0,0}, {165,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,255}, {218,255,255}, {218,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,255}, {218,255,255}, {0,0,0}, {0,0,0}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {0,0,0}, {218,255,255}, {218,255,255}, {218,255,255}, {218,255,255}, {0,0,0}, {0,0,0}, {218,255,255}, {218,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {218,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {160,228,222}, {0,0,0}, {0,0,0}, {0,0,0} },

    [13] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
      case 8:
        set_layer_color(8);
        break;
      case 9:
        set_layer_color(9);
        break;
      case 10:
        set_layer_color(10);
        break;
      case 11:
        set_layer_color(11);
        break;
      case 13:
        set_layer_color(13);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[8];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case DOUBLE_TAP: layer_move(1); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case DOUBLE_TAP: layer_move(13); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); register_code16(KC_ESCAPE); break;
        case DOUBLE_HOLD: layer_move(14); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[2].step = 0;
}
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case DOUBLE_TAP: layer_move(2); break;
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
    }
    dance_state[3].step = 0;
}
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case DOUBLE_TAP: layer_move(3); break;
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
    }
    dance_state[4].step = 0;
}
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F17);
        tap_code16(KC_F17);
        tap_code16(KC_F17);
    }
    if(state->count > 3) {
        tap_code16(KC_F17);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_F17); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F17); register_code16(KC_F17);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_F17); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F17); break;
    }
    dance_state[6].step = 0;
}
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case DOUBLE_HOLD: layer_move(0); break;
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
    }
    dance_state[7].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_7_finished, dance_7_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!mac_mode_process_record(keycode, record)) return false;
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case RGB_SLD:
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_211_221_219:
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(211,221,219);
        }
        return false;
    case HSV_159_230_221:
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(159,230,221);
        }
        return false;
    case HSV_76_219_179:
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(76,219,179);
        }
        return false;
  }
  return true;
}

