//keymap.c

// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

//Compile with command: qmk compile -kb maxipad8 -km default
//Deploy by dragging .build/maxipad8_default.uf2 to Raspberry Pi Pico (RP1-RP2) in Finder / File Explorer, should remove itself afterward

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* ┌────┬────┬────┬────┐
     * │ <- │ -> │DEL │ENT │
     * ├────┼────┼────┼────┤
     * │ 1  │ 2  │ 3  │ Up │
     * ├────┼────┼────┼────┤
     * │ 4  │ 5  │ 6  │Down│
     * ├────┼────┼────┼────┤
     * │ 7  │ 8  │ 9  │ 0  │
     * └────┴────┴────┴────┘
     */
    [0] = LAYOUT(
        KC_LEFT, KC_RIGHT, KC_BSPC, KC_ENT,
        KC_1, KC_2, KC_3, KC_UP,
        KC_4, KC_5, KC_6, KC_DOWN,
        KC_7, KC_8, KC_9, KC_0
    )
};





