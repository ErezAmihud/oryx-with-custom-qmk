#pragma once

#include QMK_KEYBOARD_H

// Returns false when the key was handled here and QMK must stop processing it.
bool mac_mode_process_record(uint16_t keycode, keyrecord_t *record);
bool mac_mode_is_mac(void);
