//keymap.c

// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌────┬────┬────┬────┐
     * │ <- │ -> │Mode│ ?  │
     * ├────┼────┼────┼────┤
     * │ 1  │ 2  │ 3  │ Up │
     * ├────┼────┼────┼────┤
     * │ 4  │ 5  │ 6  │Down│
     * ├────┼────┼────┼────┤
     * │ 7  │ 8  │ 9  │ 0  │
     * └────┴────┴────┴────┘
     */

    [0] = LAYOUT(
        UG_NEXT, //rotary encoder push
        KC_LEFT, KC_RIGHT, RGB_TOG, KC_PRINT_SCREEN,
        KC_1, KC_2, KC_3, KC_UP,
        KC_4, KC_5, KC_6, KC_DOWN,
        KC_7, KC_8, KC_9, KC_0
    )

};



void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom();  // Enable RGB lights without saving to EEPROM
    rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);  // Set to a static color mode
    rgblight_setrgb(255, 0, 0);  // Set RGB to full red (255, 0, 0)
}


#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return rotation; // Rotate if needed
}

bool oled_task_user(void) {
    oled_write_ln_P(PSTR("Hello OLED!"), false);
    return false;
}

#endif


//Beat pad mode
// [2] = LAYOUT()

//For single key (initial testing purposes)
// [0] = LAYOUT(
//     KC_A // Change to any keycode you want
// )




