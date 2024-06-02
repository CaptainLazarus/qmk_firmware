#include QMK_KEYBOARD_H
#include "unicode.h"

enum layers{
  MAC_BASE,
  MAC_FN,
  WIN_BASE,
  WIN_FN,
  WIN_MATH,
  WIN_MATH_FUNCS
};

enum custom_keycodes {
  KC_ALPHA = SAFE_RANGE,
  KC_BETA,
  KC_GAMMA,
  KC_DELTA,
  KC_EPSILON,
  KC_ZETA,
  KC_ETA,
  KC_THETA,
  KC_IOTA,
  KC_KAPPA,
  KC_LAMBDA,
  KC_MU,
  KC_NU,
  KC_XI,
  KC_OMICRON,
  KC_PI,
  KC_RHO,
  KC_SIGMA,
  KC_TAU,
  KC_UPSILON,
  KC_PHI,
  KC_CHI,
  KC_PSI,
  KC_OMEGA,
  KC_BELONGS_TO,
  KC_SUBSET,
  KC_SUPERSET,
  KC_PROPER_SUBSET,
  KC_PROPER_SUPERSET,
  KC_FOR_ALL,
  KC_EXISTS,
  KC_NOT_EXISTS,
  KC_EMPTY_SET,
  KC_INFINITY,
  KC_ELEMENT_OF,
  KC_NOT_ELEMENT_OF,
  KC_INTERSECTION,
  KC_UNION,
  KC_DIFFERENCE,
  KC_SYMMETRIC_DIFFERENCE,
  KC_COMPLEMENT,
  KC_LEFT_ARROW,
  KC_UP_ARROW,
  KC_RIGHT_ARROW,
  KC_DOWN_ARROW,
  KC_LEFT_RIGHT_ARROW,
  KC_UP_DOWN_ARROW,
  KC_LEFT_DOUBLE_ARROW,
  KC_RIGHT_DOUBLE_ARROW,
  KC_UP_DOUBLE_ARROW,
  KC_DOWN_DOUBLE_ARROW,
  KC_LEFT_RIGHT_DOUBLE_ARROW,
  KC_UP_DOWN_DOUBLE_ARROW
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch (keycode) {
    case KC_ALPHA:
      send_unicode_string("α");
      return false;
    case KC_BETA:
      send_unicode_string("β");
      return false;
    case KC_GAMMA:
      send_unicode_string("γ");
      return false;
    case KC_DELTA:
      send_unicode_string("δ");
      return false;
    case KC_EPSILON:
      send_unicode_string("ε");
      return false;
    case KC_ZETA:
      send_unicode_string("ζ");
      return false;
    case KC_ETA:
      send_unicode_string("η");
      return false;
    case KC_THETA:
      send_unicode_string("θ");
      return false;
    case KC_IOTA:
      send_unicode_string("ι");
      return false;
    case KC_KAPPA:
      send_unicode_string("κ");
      return false;
    case KC_LAMBDA:
      send_unicode_string("λ");
      return false;
    case KC_MU:
      send_unicode_string("μ");
      return false;
    case KC_NU:
      send_unicode_string("ν");
      return false;
    case KC_XI:
      send_unicode_string("ξ");
      return false;
    case KC_OMICRON:
      send_unicode_string("ο");
      return false;
    case KC_PI:
      send_unicode_string("π");
      return false;
    case KC_RHO:
      send_unicode_string("ρ");
      return false;
    case KC_SIGMA:
      send_unicode_string("σ");
      return false;
    case KC_TAU:
      send_unicode_string("τ");
      return false;
    case KC_UPSILON:
      send_unicode_string("υ");
      return false;
    case KC_PHI:
      send_unicode_string("φ");
      return false;
    case KC_CHI:
      send_unicode_string("χ");
      return false;
    case KC_PSI:
      send_unicode_string("ψ");
      return false;
    case KC_OMEGA:
      send_unicode_string("ω");
      return false;
    case KC_BELONGS_TO:
      send_unicode_string("∈");
      return false;
    case KC_SUBSET:
      send_unicode_string("⊆");
      return false;
    case KC_SUPERSET:
      send_unicode_string("⊇");
      return false;
    case KC_PROPER_SUBSET:
      send_unicode_string("⊂");
      return false;
    case KC_PROPER_SUPERSET:
      send_unicode_string("⊃");
      return false;
    case KC_FOR_ALL:
      send_unicode_string("∀");
      return false;
    case KC_EXISTS:
      send_unicode_string("∃");
      return false;
    case KC_NOT_EXISTS:
      send_unicode_string("∄");
      return false;
    case KC_EMPTY_SET:
      send_unicode_string("∅");
      return false;
    case KC_INFINITY:
      send_unicode_string("∞");
      return false;
    case KC_ELEMENT_OF:
      send_unicode_string("∈");
      return false;
    case KC_NOT_ELEMENT_OF:
      send_unicode_string("∉");
      return false;
    case KC_INTERSECTION:
      send_unicode_string("∩");
      return false;
    case KC_UNION:
      send_unicode_string("∪");
      return false;
    case KC_DIFFERENCE:
      send_unicode_string("−");
      return false;
    case KC_SYMMETRIC_DIFFERENCE:
      send_unicode_string("∆");
      return false;
    case KC_COMPLEMENT:
      send_unicode_string("∁");
      return false;
    case KC_LEFT_ARROW:
      send_unicode_string("←");
      return false;
    case KC_UP_ARROW:
      send_unicode_string("↑");
      return false;
    case KC_RIGHT_ARROW:
      send_unicode_string("→");
      return false;
    case KC_DOWN_ARROW:
      send_unicode_string("↓");
      return false;
    case KC_LEFT_RIGHT_ARROW:
      send_unicode_string("↔");
      return false;
    case KC_UP_DOWN_ARROW:
      send_unicode_string("↕");
      return false;
    case KC_LEFT_DOUBLE_ARROW:
      send_unicode_string("⇐");
      return false;
    case KC_RIGHT_DOUBLE_ARROW:
      send_unicode_string("⇒");
      return false;
    case KC_UP_DOUBLE_ARROW:
      send_unicode_string("⇑");
      return false;
    case KC_DOWN_DOUBLE_ARROW:
      send_unicode_string("⇓");
      return false;
    case KC_LEFT_RIGHT_DOUBLE_ARROW:
      send_unicode_string("⇔");
      return false;
    case KC_UP_DOWN_DOUBLE_ARROW:
      send_unicode_string("⇕");
      return false;
    }
  }
  return true;
}


#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [MAC_BASE] = LAYOUT_ansi_109(
			       KC_ESC,   KC_BRID,  KC_BRIU,  KC_NO,    KC_NO,    RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,    KC_MUTE,  KC_NO,    KC_NO,    RGB_MOD,  KC_F13,   KC_F14,   KC_F15,   KC_F16,
			       KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
			       KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
			       KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,                                 KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
			       KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,              KC_P1,    KC_P2,    KC_P3,
			       KC_LCTL,  KC_LOPT,  KC_LCMD,                                KC_SPC,                                 KC_RCMD,  KC_ROPT,  MO(MAC_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,              KC_PDOT,  KC_PENT),
  
  [MAC_FN] = LAYOUT_ansi_109(
			     _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     RGB_TOG,  _______,  _______,  RGB_TOG,  _______,  _______,  _______,  _______,
			     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
			     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
			     _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,                                _______,  _______,  _______,  _______,
			     _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,            _______,            _______,  _______,  _______,
			     _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,            _______,  _______),
  
  [WIN_BASE] = LAYOUT_ansi_109(
			       KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     KC_MUTE,  KC_PSCR,  KC_NO,    RGB_MOD,  MO(WIN_MATH),  _______,  _______,  _______,
			       KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
			       KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
			       KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,                                 KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
			       KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,              KC_P1,    KC_P2,    KC_P3,
			       KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RWIN,  MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,              KC_PDOT,  KC_PENT),
  
  [WIN_FN] = LAYOUT_ansi_109(
			     _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,    RGB_TOG,  _______,  _______,  RGB_TOG,  _______,  _______,  _______,  _______,
			     _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
			     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
			     _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,                                _______,  _______,  _______,  _______,
			     _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,            _______,            _______,  _______,  _______,
			     _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,            _______,  _______),
  
  [WIN_MATH] = LAYOUT_ansi_109(
			       _______, _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
			       _______, _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
			       _______, _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
			       _______, KC_ALPHA, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,                                _______,  _______,  _______,  _______,
			       MO(WIN_MATH_FUNCS),          _______,  _______,  _______,  _______,  KC_BETA,  _______,  _______,  _______,  _______,  _______,              _______,            _______,            _______,  _______,  _______,
			       _______, _______, _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,            _______,  _______),
  [WIN_MATH_FUNCS] = LAYOUT_ansi_109(
			       _______, _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
			       _______, _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
			       _______, _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_BELONGS_TO,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
			       _______, _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,                                _______,  _______,  _______,  _______,
			       _______,          _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,            _______,  _______,  _______,
			       _______, _______, _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,            _______,  _______),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
  [MAC_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
  [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
  [WIN_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
  [WIN_MATH] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
  [WIN_MATH_FUNCS] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif // ENCODER_MAP_ENABLE
