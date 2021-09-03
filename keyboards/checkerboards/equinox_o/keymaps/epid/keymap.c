/* Copyright 2020 Nathan Spears
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

#include QMK_KEYBOARD_H

#define CTL_ESC CTL_T(KC_ESC)
#define DS_PRSR A(KC_UP)       // Previous discord server
#define DS_NXSR A(KC_DOWN)     // Next discord server
#define DS_PRUN LSA(KC_UP)     // Previous unread discord msg
#define DS_NXUN LSA(KC_DOWN)   // Next unread discord msg
#define DS_READ KC_ESC
#define DS_SRED S(KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_default(
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_NO  , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
        CTL_ESC, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_NO  , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
        KC_LSPO, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_NO  , KC_N   , KC_M   , KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC,
        KC_LCTL, KC_NO  , KC_LALT,          LT(1, KC_ENT),                      LT(2, KC_SPC),    MO(3),   KC_NO,   KC_RGUI
    ),

    [1] = LAYOUT_default(
        _______, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL ,
        _______, _______,C(KC_F4),A(KC_F4), _______, _______, _______, KC_MINS, KC_EQL , KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
        _______, _______, _______, _______, _______, _______, _______, KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
        _______, KC_NO  , _______,          _______,                            _______,          _______, KC_NO  , _______
    ),

    [2] = LAYOUT_default(
        _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PGUP, KC_HOME,
        _______, KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_END ,
        _______, KC_NO  , _______,          _______,                            _______,          _______, KC_NO  , _______
    ),
    [3] = LAYOUT_default(
        RESET  , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_F24 , _______,
        RGB_TOG, RGB_VAI, RGB_SPI, RGB_HUI, RGB_SAI, _______, _______, _______, _______, _______, DS_SRED, DS_PRUN, KC_PGUP,
        RGB_MOD, RGB_VAD, RGB_SPD, RGB_HUD, RGB_SAD, _______, _______, _______, _______, _______, _______, DS_NXUN, KC_PGDN,
        RGB_RMOD,KC_NO  , _______,          _______,                            _______,          _______, KC_NO  , _______
    )
};

/* SpOnGeBoB tExT */
bool spongebob_mode = false;
bool spongebob_case = false;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (spongebob_mode) {
    switch(keycode) {
      case KC_A...KC_Z:
        if (record->event.pressed) {
          (spongebob_case ^= 1) == 0 ? tap_code16(S(keycode)) : tap_code(keycode);
          return false; break;
        }
    }
  }
  switch(keycode) {
    case KC_F24:
      if (record->event.pressed) {
        spongebob_mode ^= 1;
      }
      return false; break;
  }
  return true;
}
