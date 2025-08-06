//config.h

/* Copyright 2020 xxx
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
#pragma once

// Rotary Encoder Support
// #define ENCODER_A_PINS { GP26 } //remove if unnecessary
// #define ENCODER_B_PINS { GP28 } //remove if unnecessary
#define ENCODER_RESOLUTION 5
#define ENCODER_MAP_KEY_DELAY 1
#define ENCODER_DIRECTION_FLIP

// OLED Setup
#define I2C_DRIVER I2CD0    // This is our i2c instance ()
#define I2C_SCL_PIN GP1
#define I2C_SDA_PIN GP0
// #define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_DISPLAY_ADDRESS 0x3D
#define OLED_DISPLAY_128X32

// RGB Setup
#define RGBLIGHT_LED_COUNT 16
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB
#define RGBLIGHT_LIMIT_VAL 255
#define RGBLIGHT_SLEEP
#define RGBLIGHT_ANIMATIONS
#define WS2812_REVERSE
