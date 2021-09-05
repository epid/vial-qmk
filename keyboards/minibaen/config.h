#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x726B
#define PRODUCT_ID      0x6D62
#define DEVICE_VER      0x0001
#define MANUFACTURER    rainkeebs
#define PRODUCT         Minibaen

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 13

/* key matrix pins */
#define MATRIX_ROW_PINS { D2, C4, C5, D3 }
#define MATRIX_COL_PINS { C7, B7, B6, B5, B4, B3, B2, B1, B0, D6, D5, C6, D4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING 5

/* Encoder */
#define ENCODERS_PAD_A { D0 }
#define ENCODERS_PAD_B { D1 }
#define ENCODER_RESOLUTION 4
#define ENCODER_DIRECTION_FLIP
