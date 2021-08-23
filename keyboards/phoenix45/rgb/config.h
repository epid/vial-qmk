/*
Copyright 2021 KnoblesseOblige

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

#ifdef RGBLIGHT_ENABLE
  #define RGB_DI_PIN B7
  #define RGBLED_NUM 13          // Number of LEDs
  #define RGBLIGHT_LIMIT_VAL 255 // Maximum brightness
  #define RGBLIGHT_SLEEP         // RGB lighting will be switched off when the host goes to sleep

  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8

  #define RGBLIGHT_ANIMATIONS
#endif

/*== customize breathing effect ==*/
/*==== (DEFAULT) use fixed table instead of exp() and sin() ====*/
// #define RGBLIGHT_BREATHE_TABLE_SIZE 256      // 256(default) or 128 or 64
/*==== use exp() and sin() ====*/
// #define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7
// #define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255
