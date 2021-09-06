#include QMK_KEYBOARD_H

#define SPFN1 LT(1, KC_SPACE)
#define BSFN2 LT(2, KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_all(
    _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
    _______,   KC_ESC,    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_DEL,    KC_BSPC,   _______,
    _______,   KC_TAB,    KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      KC_QUOT,              KC_ENT,    _______,
    _______,   KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,                 KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_RSFT,   KC_UP,
    _______,   KC_LCTL,   KC_LALT,   KC_LGUI,   MO(1),     SPFN1,                                      BSFN2,     KC_RALT,   MO(2),     KC_LEFT,   KC_DOWN,   KC_RGHT
  ),

  [1] = LAYOUT_all(
    _______,   RESET,     _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
    _______,   KC_GRV,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINS,   KC_EQL,    _______,
    _______,   RGB_TOG,   RGB_HUI,   RGB_SAI,   RGB_VAI,   KC_VOLU,   KC_LBRC,   KC_RBRC,   KC_4,      KC_5,      KC_6,      KC_SCLN,              _______,   _______,
    _______,   RGB_MOD,   RGB_HUD,   RGB_SAD,   RGB_VAD,   KC_VOLD,   KC_LCBR,              KC_RCBR,   KC_1,      KC_2,      KC_3,      _______,   _______,
    _______,   _______,   _______,   _______,   _______,   _______,                                    KC_DEL,    KC_0,      _______,   _______,   _______,   _______
  ),

  [2] = LAYOUT_all(
    _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
    _______,   KC_TILD,   KC_EXLM,   KC_AT,     KC_HASH,   KC_DLR,    KC_PERC,   KC_CIRC,   KC_AMPR,   KC_ASTR,   KC_LPRN,   KC_RPRN,   KC_UNDS,   KC_PLUS,   _______,
    _______,   _______,   _______,   _______,   KC_INS,    KC_PGUP,   KC_HOME,   _______,   _______,   _______,   _______,   KC_COLN,              _______,   _______,
    _______,   _______,   _______,   _______,   KC_DEL,    KC_PGDN,   KC_END,               _______,   _______,   _______,   _______,   _______,   _______,
    _______,   _______,   _______,   _______,   _______,   KC_DEL,                                     _______,   _______,   _______,   _______,   _______,   _______
  ),

  [3] = LAYOUT_all(
    _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
    _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
    _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,   _______,
    _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,   _______,   _______,   _______,   _______,   _______,
    _______,   _______,   _______,   _______,   _______,   _______,                                    _______,   _______,   _______,   _______,   _______,   _______
  )

};


void keyboard_pre_init_user(void) {
    setPinOutput(F5);  // initialize F5 for LED
    setPinOutput(F6);  // initialize F6 for LED
    setPinOutput(F7);  // initialize F7 for LED
}
bool layer_leds = false;

layer_state_t layer_state_set_user(layer_state_t state) {
    //writePinLow(F5);
    //writePinLow(F6);
    //writePinLow(F7);
    if (layer_leds == true) {
        switch (get_highest_layer(state)) {
            case 1:
                writePinHigh(F5);
                break;
            case 2:
                writePinHigh(F6);
                break;
            case 3:
                writePinHigh(F7);
                break;
            default:
                writePinLow(F5);
                writePinLow(F6);
                writePinLow(F7);
                break;
        }
    }
    return state;
}

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
    case KC_F23:
      if (record->event.pressed) {
	layer_leds ^= 1;
        writePinLow(F5);
        writePinLow(F6);
        writePinLow(F7);
      }
      return false; break;
    case KC_F24:
      if (record->event.pressed) {
        spongebob_mode ^= 1;
	spongebob_mode ? writePinHigh(F5) : writePinLow(F5);
      }
      return false; break;
  }
  return true;
}
