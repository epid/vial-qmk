/* 
Copyright 2021 Evan Sailer, epid, & QMK Firmware
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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   ,
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
    KC_ESC , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
    KC_LCTL, MO(2)  , KC_LGUI, KC_LALT,   LT(1,KC_ENT),     LT(2,KC_SPC),   MO(3)  , KC_LEFT, KC_DOWN, KC_RGHT
  ),
  [1] = LAYOUT(
    _______, _______, _______, _______, _______, _______,
    KC_GRV , KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL ,
    _______, KC_BSLS, KC_QUOT, KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, KC_DOWN, KC_UP  , KC_LEFT, KC_RGHT, _______,
    _______, KC_ESC , _______, KC_PSCR, _______, _______, _______, KC_MSTP, KC_MPLY, KC_MPRV, KC_MNXT, _______,
    _______, _______, _______, _______,     _______,           _______,     _______, _______, _______, _______
  ),
  [2] = LAYOUT(
    _______, _______, _______, _______, _______, _______,
    KC_TILD, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , _______,
    KC_ESC , KC_PIPE, KC_DQT , KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_4   , KC_5   , KC_6   , KC_VOLU, _______,
    _______, _______, _______, _______, _______, _______, KC_0   , KC_1   , KC_2   , KC_3   , KC_VOLD, _______,
    _______, _______, _______, _______,     _______,           _______,     _______, _______, _______, _______
  ),
  [3] = LAYOUT(
    RESET  , _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , _______,
    KC_ESC , _______, _______, _______, _______, _______, _______, KC_F5  , KC_F6  , KC_F7  , KC_F8  , _______,
    KC_LSFT, _______, _______, _______, _______, _______, _______, KC_F9  , KC_F10 , KC_F11 , KC_F12 , _______,
    _______, KC_LALT, _______, _______,     _______,          _______,      _______, _______, _______, _______
  )
};
