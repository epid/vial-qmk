/*
Copyright 2021 Evan Sailer, epid, & QMK Firmware

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

#define VENDOR_ID       0xFEAE
#define PRODUCT_ID      0x8846
#define DEVICE_VER      0x0003
#define MANUFACTURER    trashman
#define PRODUCT         Skiff

#define MATRIX_ROWS 2
#define MATRIX_COLS 8
#define MATRIX_ROW_PINS { F1, F0 }
#define MATRIX_COL_PINS { D0, D1, D2, D3, D4, D5, D6, D7 }
#define DIODE_DIRECTION COL2ROW
#define DEBOUNCE 5

#define USB_MAX_POWER_CONSUMPTION 100
// #define PORTSCAN D0
// #define PORTSCAN_PINS 255
#define RGB_DI_PIN B0
#define RGBLED_NUM 4
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_SLEEP
#define NO_USB_STARTUP_CHECK
