/* 
Copyright 2021 Evan Sailer & epid
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to
deal in the Software without restriction, including without limitation the
rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma once
#include "config_common.h"

#define VENDOR_ID     0xFEAE
#define PRODUCT_ID    0x5634 // V4
#define DEVICE_VER    0x0001
#define MANUFACTURER  trash man
#define PRODUCT       V4N4G0N

#define MATRIX_ROWS 5
#define MATRIX_COLS 12
#define MATRIX_ROW_PINS { F0, F1, F4, F6, F7 }
#define MATRIX_COL_PINS { F5, B0, B1, B2, B3, B7, D2, D3, D5, D4, D6, D7 }
#define DIODE_DIRECTION COL2ROW

#define BACKLIGHT_LEVELS 1
#define BACKLIGHT_PIN B7

#define DEBOUNCE 5
//#define TAPPING_TERM 175
//#define PERMISSIVE_HOLD

#define USB_MAX_POWER_CONSUMPTION 100
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
