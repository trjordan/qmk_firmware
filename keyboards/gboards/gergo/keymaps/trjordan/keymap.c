#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(MO(1), KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, MO(1), KC_LGUI, KC_A, KC_O, KC_E, KC_U, KC_I, KC_TAB, MO(4), KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS, KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_LCTL, MO(2), MO(2), KC_RCTL, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSFT, MO(3), KC_BSPC, KC_ESC, KC_LALT, KC_RALT, KC_ENT, KC_SPC, MO(3)),
	[1] = LAYOUT(LGUI(KC_BSLS), KC_PLUS, KC_PIPE, KC_LCBR, KC_RCBR, KC_ASTR, KC_AMPR, KC_7, KC_8, KC_9, KC_AT, KC_SLSH, KC_TRNS, KC_TILD, KC_SLSH, KC_LPRN, KC_RPRN, KC_PERC, KC_TRNS, KC_TRNS, KC_DLR, KC_4, KC_5, KC_6, KC_CIRC, KC_EQL, KC_TRNS, KC_GRV, KC_BSLS, KC_LBRC, KC_RBRC, KC_AT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_EXLM, KC_1, KC_2, KC_3, KC_HASH, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_0, KC_TRNS, KC_TRNS),
	[2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F4, KC_F5, KC_F6, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F10, KC_F11, KC_F12),
	[3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, LCTL(LSFT(KC_TAB)), LCTL(KC_TAB), LGUI(KC_GRV), KC_MPRV, LGUI(LSFT(KC_7)), KC_UP, LGUI(LSFT(KC_8)), KC_MNXT, KC_QUES, KC_TRNS, LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5), KC_TRNS, LGUI(LCTL(LSFT(KC_4))), LCTL(LGUI(KC_LEFT)), KC_LEFT, KC_DOWN, KC_RGHT, LCTL(LGUI(KC_RIGHT)), KC_VOLD, KC_TRNS, LGUI(KC_6), LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), LGUI(KC_0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LGUI(KC_TAB), LCTL(KC_F3), LGUI(KC_TILD), KC_MPLY, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT(KC_TRNS, LCTL(LGUI(LSFT(LALT(KC_QUOT)))), LCTL(LGUI(LSFT(LALT(KC_COMM)))), LCTL(LGUI(LSFT(LALT(KC_DOT)))), LCTL(LGUI(LSFT(LALT(KC_P)))), LCTL(LGUI(LSFT(LALT(KC_Y)))), LCTL(LGUI(LSFT(LALT(KC_F)))), LCTL(LGUI(LSFT(LALT(KC_G)))), LCTL(LGUI(LSFT(LALT(KC_C)))), LCTL(LGUI(LSFT(LALT(KC_R)))), LCTL(LGUI(LSFT(LALT(KC_L)))), KC_TRNS, KC_TRNS, LCTL(LGUI(LSFT(LALT(KC_A)))), LCTL(LGUI(LSFT(LALT(KC_O)))), LCTL(LGUI(LSFT(LALT(KC_E)))), LCTL(LGUI(LSFT(LALT(KC_U)))), LCTL(LGUI(LSFT(LALT(KC_I)))), KC_TRNS, KC_TRNS, LCTL(LGUI(LSFT(LALT(KC_D)))), LCTL(LGUI(LSFT(LALT(KC_H)))), LCTL(LGUI(LSFT(LALT(KC_T)))), LCTL(LGUI(LSFT(LALT(KC_N)))), LCTL(LGUI(LSFT(LALT(KC_S)))), LCTL(LGUI(LSFT(LALT(KC_MINS)))), KC_TRNS, LCTL(LGUI(LSFT(LALT(KC_SCLN)))), LCTL(LGUI(LSFT(LALT(KC_Q)))), LCTL(LGUI(LSFT(LALT(KC_J)))), LCTL(LGUI(LSFT(LALT(KC_K)))), LCTL(LGUI(LSFT(LALT(KC_X)))), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LCTL(LGUI(LSFT(LALT(KC_B)))), LCTL(LGUI(LSFT(LALT(KC_M)))), LCTL(LGUI(LSFT(LALT(KC_W)))), LCTL(LGUI(LSFT(LALT(KC_V)))), LCTL(LGUI(LSFT(LALT(KC_Z)))), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





