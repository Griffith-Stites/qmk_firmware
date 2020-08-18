#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_4x4(
    KC_F13,  KC_F14,   KC_F15,    KC_F16,
    KC_F17,  KC_KP_7,  KC_KP_8,   KC_KP_9,
    KC_F18,  KC_KP_4,  KC_KP_5,   KC_KP_6,
    KC_F19,  KC_KP_1,  KC_KP_2,   KC_KP_3,
  ),
};