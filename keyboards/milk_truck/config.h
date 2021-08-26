#pragma once

#include "config_common.h"

#define VENDOR_ID  0x646D  // dm
#define PRODUCT_ID 0x4D54  // MT
#define DEVICE_VER 0x0001
#define MANUFACTURER drmmr
#define PRODUCT Milk Truck

#define MATRIX_ROWS 4
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { F1, C7, C6, B6 }
#define MATRIX_COL_PINS { F4, F5, F6, B3, B2, B1, B0, B5, B4, D7, D5, D3, D2, D1, D0 }
#define UNUSED_PINS
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN F0
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 3
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
