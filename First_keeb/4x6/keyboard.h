#pragma once

#include "quantum.h"

// Define the layout for your keyboard
#define LAYOUT_split_4x6( \
    k00, k01, k02, k03, k04, k05, \
    k10, k11, k12, k13, k14, k15, \
    k20, k21, k22, k23, k24, k25, \
    k30, k31, k32, k33, k34, k35, \
    k40, k41, k42, k43, k44, k45, \
    k50, k51, k52, k53, k54, k55  \
) { \
    { k00, k01, k02, k03, k04, k05 }, \
    { k10, k11, k12, k13, k14, k15 }, \
    { k20, k21, k22, k23, k24, k25 }, \
    { k30, k31, k32, k33, k34, k35 }, \
    { k40, k41, k42, k43, k44, k45 }, \
    { k50, k51, k52, k53, k54, k55 }  \
}

// Define the keymap for the keyboard
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_4x6(
        KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,
        KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,
        KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,
        KC_LCTRL, KC_LALT, KC_SPACE, KC_TAB, KC_LSHIFT, KC_ESC,
        KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,
        KC_7,  KC_8,  KC_9,  KC_0,  KC_M,  KC_N
    )
};

// Define any other necessary functions or variables here
