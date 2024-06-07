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

enum unicode_names {
  ALPHA,
  BETA,
  GAMMA,
  DELTA,
  EPSILON,
  ZETA,
  ETA,
  THETA,
  IOTA,
  KAPPA,
  LAMBDA,
  MU,
  NU,
  XI,
  OMICRON,
  PI,
  RHO,
  SIGMA,
  TAU,
  UPSILON,
  PHI,
  CHI,
  PSI,
  OMEGA,
  BELONGS_TO,
  SUBSET,
  SUPERSET,
  PROPER_SUBSET,
  PROPER_SUPERSET,
  FOR_ALL,
  EXISTS,
  NOT_EXISTS,
  EMPTY_SET,
  INFINITY,
  ELEMENT_OF,
  NOT_ELEMENT_OF,
  INTERSECTION,
  UNION,
  DIFFERENCE,
  SYMMETRIC_DIFFERENCE,
  COMPLEMENT,
  LEFT_ARROW,
  UP_ARROW,
  RIGHT_ARROW,
  DOWN_ARROW,
  LEFT_RIGHT_ARROW,
  UP_DOWN_ARROW,
  LEFT_DOUBLE_ARROW,
  RIGHT_DOUBLE_ARROW,
  UP_DOUBLE_ARROW,
  DOWN_DOUBLE_ARROW,
  LEFT_RIGHT_DOUBLE_ARROW,
  UP_DOWN_DOUBLE_ARROW,
  SUMMATION,
  BIG_PI,
  SMALL_PI,
  SQRT,
  COMPLEX
};

const uint32_t PROGMEM unicode_map[] = {
  [ALPHA]              = 0x03B1,  // α
  [BETA]               = 0x03B2,  // β
  [GAMMA]              = 0x03B3,  // γ
  [DELTA]              = 0x03B4,  // δ
  [EPSILON]            = 0x03B5,  // ε
  [ZETA]               = 0x03B6,  // ζ
  [ETA]                = 0x03B7,  // η
  [THETA]              = 0x03B8,  // θ
  [IOTA]               = 0x03B9,  // ι
  [KAPPA]              = 0x03BA,  // κ
  [LAMBDA]             = 0x03BB,  // λ
  [MU]                 = 0x03BC,  // μ
  [NU]                 = 0x03BD,  // ν
  [XI]                 = 0x03BE,  // ξ
  [OMICRON]            = 0x03BF,  // ο
  [PI]                 = 0x03C0,  // π
  [RHO]                = 0x03C1,  // ρ
  [SIGMA]              = 0x03C3,  // σ
  [TAU]                = 0x03C4,  // τ
  [UPSILON]            = 0x03C5,  // υ
  [PHI]                = 0x03C6,  // φ
  [CHI]                = 0x03C7,  // χ
  [PSI]                = 0x03C8,  // ψ
  [OMEGA]              = 0x03C9,  // ω
  [BELONGS_TO]         = 0x2208,  // ∈
  [SUBSET]             = 0x2286,  // ⊆
  [SUPERSET]           = 0x2287,  // ⊇
  [PROPER_SUBSET]      = 0x2282,  // ⊂
  [PROPER_SUPERSET]    = 0x2283,  // ⊃
  [FOR_ALL]            = 0x2200,  // ∀
  [EXISTS]             = 0x2203,  // ∃
  [NOT_EXISTS]         = 0x2204,  // ∄
  [EMPTY_SET]          = 0x2205,  // ∅
  [INFINITY]           = 0x221E,  // ∞
  [ELEMENT_OF]         = 0x2208,  // ∈
  [NOT_ELEMENT_OF]     = 0x2209,  // ∉
  [INTERSECTION]       = 0x2229,  // ∩
  [UNION]              = 0x222A,  // ∪
  [DIFFERENCE]         = 0x2212,  // −
  [SYMMETRIC_DIFFERENCE]= 0x2206,  // ∆
  [COMPLEMENT]         = 0x2201,  // ∁
  [LEFT_ARROW]         = 0x2190,  // ←
  [UP_ARROW]           = 0x2191,  // ↑
  [RIGHT_ARROW]        = 0x2192,  // →
  [DOWN_ARROW]         = 0x2193,  // ↓
  [LEFT_RIGHT_ARROW]   = 0x2194,  // ↔
  [UP_DOWN_ARROW]      = 0x2195,  // ↕
  [LEFT_DOUBLE_ARROW]  = 0x21D0,  // ⇐
  [RIGHT_DOUBLE_ARROW] = 0x21D2,  // ⇒
  [UP_DOUBLE_ARROW]    = 0x21D1,  // ⇑
  [DOWN_DOUBLE_ARROW]  = 0x21D3,  // ⇓
  [LEFT_RIGHT_DOUBLE_ARROW]= 0x21D4,  // ⇔
  [UP_DOWN_DOUBLE_ARROW]= 0x21D5,  // ⇕
  [SUMMATION]          = 0x2211,  // ∑
  [BIG_PI]             = 0x03A0,  // Π
  [SMALL_PI]           = 0x03C0,  // π
  [SQRT]               = 0x221A,  // √
  [COMPLEX]            = 0x2102  // ℂ
};

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
			       KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     KC_MUTE,  KC_PSCR,  KC_NO,    RGB_MOD,  TG(WIN_MATH),  _______,  _______,  _______,
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
			       _______, _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, UM(SMALL_PI),  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
			       _______, UM(ALPHA), _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,                                _______,  _______,  _______,  _______,
			       MO(WIN_MATH_FUNCS),          _______,  _______,  _______,  _______,  UM(BETA),  _______,  _______,  _______,  _______,  _______,              _______,            _______,            _______,  _______,  _______,
			       _______, _______, _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,            _______,  _______),

  [WIN_MATH_FUNCS] = LAYOUT_ansi_109(
				     _______, _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
				     _______, _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
				     _______, _______, _______,  UM(EXISTS),  _______,  _______,  _______,  _______,  _______,  UM(BELONGS_TO),  UM(BIG_PI),  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
				     _______, UM(FOR_ALL), UM(SUMMATION),  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,                                _______,  _______,  _______,  _______,
				     _______,          _______,  _______, UM(COMPLEX),  UM(SQRT),  UM(LEFT_DOUBLE_ARROW),  _______,  UM(LEFT_RIGHT_DOUBLE_ARROW),  UM(RIGHT_DOUBLE_ARROW),  _______,  _______,              _______,            _______,            _______,  _______,  _______,
				     _______, _______, _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,            _______,  _______)
};

#if defined(ENCODER_MAP_ENABLE)
  const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
  [MAC_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
  [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
  [WIN_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
  [WIN_MATH] = {ENCODER_CCW_CW(UC_PREV, UC_NEXT) },
  [WIN_MATH_FUNCS] = {ENCODER_CCW_CW(UC_PREV, UC_NEXT) }
};
#endif // ENCODER_MAP_ENABLE
