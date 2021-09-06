/* Copyright 2021
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

#define LY1_ENT LT(1, KC_ENT)
#define LY2_SPC LT(2, KC_SPC)
#define CTL_ESC LCTL_T(KC_ESC)

float s1[][2] = SONG(ZELDA_PUZZLE);
/*
float s2[][2] = SONG(ZELDA_TREASURE);
float s3[][2] = SONG(MARIO_THEME);
float s4[][2] = SONG(MARIO_GAMEOVER);
float s5[][2] = SONG(IMPERIAL_MARCH);
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(\
    KC_MUTE,   RGB_TOG,                                                                         MO(4)  , MO(5)  , KC_F24 ,
    KC_HOME,   KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
    KC_END ,   CTL_ESC, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
    KC_PGUP,   KC_LSPO, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSPC,
    KC_PGDN,   KC_LCTL, KC_LGUI, KC_LALT, _______, _______, LY1_ENT, _______, LY2_SPC, _______, MO(3)  , _______, KC_RGUI
  ),
  [1] = LAYOUT(\
    _______,   _______,                                                                         _______, _______, _______,
    _______,   KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
    _______,   _______, _______,C(KC_F4),A(KC_F4), _______, _______, KC_MINS, KC_EQL , KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
    _______,   _______, _______, _______, _______, _______, _______, KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV ,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [2] = LAYOUT(\
    _______,   _______,                                                                         _______, _______, _______,
    _______,   _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , _______,
    _______,   _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_PGUP, KC_HOME,
    _______,   _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_END ,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [3] = LAYOUT(\
    _______,   RESET  ,                                                                         _______, _______, _______,
    USER01 ,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    USER02 ,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    USER03 ,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    USER04 ,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [4] = LAYOUT(\
    _______,   _______,                                                                         _______, _______, _______,
    USER01 ,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    USER02 ,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    USER03 ,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    USER04 ,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [5] = LAYOUT(\
    _______,   _______,                                                                         _______, _______, _______,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  )
};

bool spongebob_mode = false;

const rgblight_segment_t PROGMEM l0_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 2, HSV_OFF });   // OFF
const rgblight_segment_t PROGMEM l1_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 1, HSV_RED});    // LED1
const rgblight_segment_t PROGMEM l2_layer[] = RGBLIGHT_LAYER_SEGMENTS({1, 1, HSV_GREEN});  // LED2
const rgblight_segment_t PROGMEM l3_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 2, HSV_PURPLE}); // LED1&2
const rgblight_segment_t PROGMEM l4_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 1, HSV_BLUE});   // LED1
const rgblight_segment_t PROGMEM l5_layer[] = RGBLIGHT_LAYER_SEGMENTS({1, 1, HSV_BLUE});   // LED2
const rgblight_segment_t PROGMEM sb_mode[]  = RGBLIGHT_LAYER_SEGMENTS({0, 2, HSV_RED});    // LED1&2

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
  l0_layer,
  l1_layer,
  l2_layer,
  l3_layer,
  l4_layer,
  l5_layer,
  sb_mode
);

void keyboard_post_init_user(void) {
  // Enable the LED layers
  rgblight_layers = my_rgb_layers;
  layer_state_set_user(layer_state);
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
  rgblight_set_layer_state(0, layer_state_cmp(state, 0));
  return state;
}


layer_state_t layer_state_set_user(layer_state_t state) {
  rgblight_set_layer_state(1, layer_state_cmp(state, 1));
  rgblight_set_layer_state(2, layer_state_cmp(state, 2));
//rgblight_set_layer_state(3, layer_state_cmp(state, 3));
  rgblight_set_layer_state(4, layer_state_cmp(state, 4));
  rgblight_set_layer_state(5, layer_state_cmp(state, 5));
  rgblight_set_layer_state(6, spongebob_mode);
  return state;
}

bool led_update_user(led_t led_state) {
  return true;
}

/* SpOnGeBoB tExT */
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
/*
    case USER00:
      if (record->event.pressed) { PLAY_SONG(s1); }
      return false; break;
    case USER01:
      if (record->event.pressed) { PLAY_SONG(s2); }
      return false; break;
    case USER02:
      if (record->event.pressed) { PLAY_SONG(s3); }
      return false; break;
    case USER03:
      if (record->event.pressed) { PLAY_SONG(s4); }
      return false; break;
    case USER04:
      if (record->event.pressed) { PLAY_SONG(s5); }
      return false; break;
*/
    case KC_F24:
      if (record->event.pressed) {
        spongebob_mode ^= 1;
        layer_state_set_user(layer_state);
	if (spongebob_mode) { PLAY_SONG(s1); }
      }
      return false; break;
  }
  return true;
}
