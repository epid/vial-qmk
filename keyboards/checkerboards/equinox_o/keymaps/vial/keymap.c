#include QMK_KEYBOARD_H

#define CTL_ESC CTL_T(KC_ESC)
#define LY1_ENT LT(1, KC_ENT)
#define LY2_SPC LT(2, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_default(
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , XXXXXXX, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
        CTL_ESC, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , XXXXXXX, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
        KC_LSPO, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , XXXXXXX, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSPC,
        KC_LCTL, XXXXXXX, KC_LALT,            LY1_ENT,                       LY2_SPC,             MO(3)  , XXXXXXX, KC_RGUI
    ),

    [1] = LAYOUT_default(
        _______, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL ,
        _______, _______, _______, _______ ,_______, _______, _______, KC_MINS, KC_EQL , KC_LCBR, KC_RCBR, KC_PIPE, KC_GRV ,
        _______, _______, _______, _______, _______, _______, _______, KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, KC_TILD,
        _______, _______, _______,          _______,                            _______,          _______, _______, _______
    ),

    [2] = LAYOUT_default(
        _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PGUP, KC_HOME,
        _______, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_END ,
        _______, _______, _______,          _______,                            _______,          _______, _______, _______
    ),
    [3] = LAYOUT_default(
        RESET  , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        RGB_TOG, RGB_VAI, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        RGB_MOD, RGB_VAD, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        RGB_RMOD,_______, _______,          _______,                            _______,          _______, _______, _______
    )
};
