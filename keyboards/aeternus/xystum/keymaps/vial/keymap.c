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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(\
    KC_MUTE,   RGB_TOG,                                                                         KC_D   , KC_N   , KC_F24 ,
    KC_HOME,   KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
    KC_END ,   KC_ESC , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
    KC_PGUP,   KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_ENT ,
    KC_PGDN,   KC_LCTL, KC_LGUI, KC_LALT, _______, KC_1   , KC_SPC , KC_SPC , KC_2   , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT
  ),
  [1] = LAYOUT(\
    _______,   _______,                                                                         _______, _______, _______,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [2] = LAYOUT(\
    _______,   _______,                                                                         _______, _______, _______,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [3] = LAYOUT(\
    _______,   _______,                                                                         _______, _______, _______,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  )
};

const rgblight_segment_t PROGMEM l0_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 2, HSV_OFF   }); // OFF
const rgblight_segment_t PROGMEM l1_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 1, HSV_RED   }); // LED1
const rgblight_segment_t PROGMEM l2_layer[] = RGBLIGHT_LAYER_SEGMENTS({1, 1, HSV_GREEN }); // LED2
const rgblight_segment_t PROGMEM l3_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 2, HSV_PURPLE}); // LED1&2

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
  l0_layer,
  l1_layer,
  l2_layer,
  l3_layer
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
  rgblight_set_layer_state(3, layer_state_cmp(state, 3));
  return state;
}

bool led_update_user(led_t led_state) {
  return true;
}
