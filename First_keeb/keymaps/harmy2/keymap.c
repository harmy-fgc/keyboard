/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
 * Copyright 2023 casuanoob <casuanoob@hotmail.com> (@casuanoob)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


// clang-format off
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮                        ╭──────────────────────────────────────────────────────╮
                              KC_ESC,  KC_1,  KC_R,    KC_T,                                                  //KC_Y,    KC_U,   KC_8,    KC_9,   //8
  // ├──────────────────────────────────────────────────────┤                        ├──────────────────────────────────────────────────────┤
        KC_TAB,    KC_Q,    KC_W,    KC_E,   KC_F,    KC_G,                              // KC_H,    KC_J,  KC_I,     KC_O,    KC_P,   KC_BSLS, //9-20
  // ├──────────────────────────────────────────────────────┤                        ├──────────────────────────────────────────────────────┤
       KC_LSFT,    KC_A,    KC_S,    KC_D,  KC_V,    KC_B,                              //  KC_N,   KC_M,   KC_K,     KC_L,    KC_SCLN, KC_QUOT, // 21-32
  // ├──────────────────────────────────────────────────────┤                        ├──────────────────────────────────────────────────────┤
       KC_LCTL,    KC_Z,    KC_X,    KC_C, KC_KP_1, KC_BSPC,  KC_SPC,          // KC_ENT,  KC_DEL, KC_LGUI, KC_COMM,  KC_DOT, KC_SLSH, KC_LALT //32 - 46
  // ╰──────────────────────────────────────────────────────┤                        ├──────────────────────────────────────────────────────╯



     KC_Y,    KC_U,   KC_8,    KC_9,
       KC_H,    KC_J,  KC_I,     KC_O,    KC_P,   KC_BSLS,  
       KC_N,   KC_M,   KC_K,     KC_L,    KC_SCLN, KC_QUOT,
       KC_ENT,  KC_DEL, KC_LGUI, KC_COMM,  KC_DOT, KC_SLSH, KC_LALT
  )
};                                                                                       
// clang-format on


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif 
  return true;
}

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
