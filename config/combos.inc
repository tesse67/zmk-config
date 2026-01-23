combo_home {
  timeout-ms = <66>;
  key-positions = <39 40>;
  bindings = <&home>;
};

// t m
/* combo_lowerleft { */
/*     timeout-ms = <66>; */
/*     key-positions = <24 25>; */
/*     bindings = <&sk LSHIFT>; */
/* }; */
// x n
/* combo_lowerright { */
/*     timeout-ms = <66>; */
/*     key-positions = <26 27>; */
/*     bindings = <&sk RSHIFT>; */
/* }; */

combo_lowerleft {
  timeout-ms = <66>;
  key-positions = <23 24 44>;
  bindings = <&sk LSHIFT>;
};

combo_lowerright {
  timeout-ms = <66>;
  key-positions = <27 28 49>;
  bindings = <&sk RSHIFT>;
};

combo_question {
  timeout-ms = <66>;
  key-positions = <40 41>;
  bindings = <&kp QMARK>;
};
combo_voldn {
  timeout-ms = <66>;
  key-positions = <32 33>;
  bindings = <&kp C_VOL_DN>;
};
combo_volup {
  timeout-ms = <66>;
  key-positions = <33 34>;
  bindings = <&kp C_VOL_UP>;
};

combo_copy {
  timeout-ms = <66>;
  key-positions = <20 23>;
  bindings = <&copyer>;
};

combo_super {
  timeout-ms = <66>;
  key-positions = <36 37>;
  bindings = <&qgui>;
};

combo_pastee {
  timeout-ms = <66>;
  key-positions = <20 33>;
  bindings = <&paster>;
};
combo_tabber {
  timeout-ms = <66>;
  key-positions = <20 24>;
  bindings = <&kp TAB>;
};
// combo_paster2 {
//     timeout-ms = <66>;
//     key-positions = <20 33>;
//     bindings = <&paster2>;
// };
        
/* combo_left_shift { */
/*   timeout-ms = <66>; */
/*   key-positions = <24 37>; */
/*   bindings = <&copyer>; */
/* }; */

/* combo_right_shift { */
/*   timeout-ms = <66>; */
/*   key-positions = <27 38>; */
/*   bindings = <&kp LC(BSPC)>; */
/* }; */

combo_dir_left {
  timeout-ms = <66>;
  key-positions = <24 37>;
  bindings = <&kp LEFT>;
};

combo_dir_right {
  timeout-ms = <66>;
  key-positions = <27 38>;
  bindings = <&kp RIGHT>;
};

combo_new_copy {
  timeout-ms = <66>;
  key-positions = <13 25>;
  bindings = <&copyer>;
};

combo_new_paste {
  timeout-ms = <66>;
  key-positions = <26 16>;
  bindings = <&paster>;
};

combo_dir_up {
  timeout-ms = <66>;
  key-positions = <38 40>;
  bindings = <&kp UP>;
};

combo_dir_down {
  timeout-ms = <66>;
  key-positions = <35 37>;
  bindings = <&kp DOWN>;
};

combo_dir_shift_alt {
  timeout-ms = <66>;
  key-positions = <13 14>;
  bindings = <&kp LS(LALT)>;
};

/* combo_dir_german { */
/*   timeout-ms = <66>; */
/*   key-positions = <38 39>; */
/*   bindings = <&sl GERMAN>; */
/* }; */

combo_qwerty {
  timeout-ms = <66>;
  key-positions = <38 39>;
  layers = <BASE>;
  bindings = <&to QWERTY>;
};

// TODO find use
// combo_STENO {
//   timeout-ms = <66>;
//   key-positions = <15 16>;
//   layers = <BASE>;
//   bindings = <&to STENO>;
// };

combo_BASE {
  timeout-ms = <66>;
  key-positions = <15 16>;
  layers = <STENO>;
  bindings = <&to BASE>;
};

combo_BASE2 {
  timeout-ms = <66>;
  key-positions = <38 39>;
  layers = <QWERTY>;
  bindings = <&to BASE>;
};

combo_searcher {
  timeout-ms = <66>;
  key-positions = <13 20>;
  bindings = <&searcher>;
};
combo_minus {
  timeout-ms = <66>;
  key-positions = <28 29 49>;
  bindings = <&kp MINUS>;
};
combo_contro2 {
  timeout-ms = <66>;
  key-positions = <10 11>;
  bindings = <&sl CONTRO>;
};
combo_parens {
  timeout-ms = <66>;
  key-positions = <23 24 49>;
  bindings = <&parens_>;
};
combo_brace {
  timeout-ms = <66>;
  key-positions = <12 13 49>;
  bindings = <&brace_>;
};
combo_bracket {
  timeout-ms = <66>;
  key-positions = <35 36 49>;
  bindings = <&bracket_>;
};

combo_bracketer {
  timeout-ms = <66>;
  key-positions = <35 36 44>;
  bindings = <&bracket2_>; //TODO why
};

combo_quote {
  timeout-ms = <66>;
  key-positions = <21 22 49>;
  bindings = <&quote_>;
};
combo_squote {
  timeout-ms = <66>;
  key-positions = <22 23 49>;
  bindings = <&squote_>;
};

combo_squotee {
  timeout-ms = <66>;
  key-positions = <18 19>;
  bindings = <&kp F6>;
};

combo_assign {
  timeout-ms = <66>;
  key-positions = <10 11 49>;
  bindings = <&assign_>;
};

combo_uneq {
  timeout-ms = <66>;
  key-positions = <11 12 49>;
  bindings = <&uneq>;
};

combo_pipecb {
  timeout-ms = <66>;
  key-positions = <21 37>;
  bindings = <&kp PIPE>;
};

combo_tabwt {
  timeout-ms = <66>;
  key-positions = <10 24>;
  bindings = <&paster>;
};

combo_starnsemi {
  timeout-ms = <66>;
  key-positions = <27 19>;
  bindings = <&kp STAR>;
};