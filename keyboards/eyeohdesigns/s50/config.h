/*
Copyright 2020 Eye Oh Designs
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID  0x0E0D
#define PRODUCT_ID 0x5350
#define DEVICE_VER 0x0001
#define MANUFACTURER EYE OH DESIGNS
#define PRODUCT S50K
#define DESCRIPTION Kit version of the S50

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 8
#define ENCODERS_PAD_A {B2}
#define ENCODERS_PAD_B {D1}
#define ENCODER_RESOLUTION 4

#define MATRIX_ROW_PINS { D0, B4, E6, D3, D4, C6, D7 }
#define MATRIX_COL_PINS { F4, D2, F5, F6, F7, B6, B1, B3}
#define UNUSED_PINS
#define DIODE_DIRECTION COL2ROW

#define BACKLIGHT_PIN B5
#define BACKLIGHT_BREATHING
// #define BACKLIGHT_LEVELS 3

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
