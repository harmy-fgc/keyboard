// Copyright 2023 Adam Tombleson (@rekarnar)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,        // Row 1: 0-5
        KC_6,    KC_7,    KC_8,    KC_9,    KC_A,    KC_B,        // Row 2: 6-11
        KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,        // Row 3: C-H
        KC_I,    KC_J,    KC_K,    KC_L,    KC_M,    KC_N,        // Row 4: I-N
        KC_O,    KC_P,    KC_Q,    KC_R,    KC_S,    KC_T,        // Row 5: O-T
        KC_U,    KC_V,    KC_W,    KC_X,    KC_Y,    KC_Z,        // Row 6: U-Z
        KC_TAB,  KC_ENTER, KC_SPACE, KC_BSPC, KC_DEL, KC_NO         // Row 7: Other keys
    )
};





void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;
}
