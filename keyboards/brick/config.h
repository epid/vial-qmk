/* Copyright 2018 Jack Humbert
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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7170
#define PRODUCT_ID      0x5360
#define DEVICE_VER      0x0001
#define MANUFACTURER    Pauper
#define PRODUCT         Brick

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12
#define MATRIX_ROW_PINS { D3, D5, F0, F1 }
#define MATRIX_COL_PINS { B1, B3, F7, F6, D4, D6, D7, B4, B5, B6, C6, C7 }

#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define RGB_DI_PIN D2
#ifdef RGB_DI_PIN
    #define RGBLIGHT_ANIMATIONS
    #define RGBLED_NUM 8
    #define RGBLIGHT_HUE_STEP 8
    #define RGBLIGHT_SAT_STEP 8
    #define RGBLIGHT_VAL_STEP 8
#endif

#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }
