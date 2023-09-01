#define AS(keycode) &as LS(keycode) keycode
#define TAP_MS 200
#define U_MOUSE_MOVE_MAX 1500

#define LOWER 1
#define RAISED 2
#define ADJUST 3

&mt {
  flavor = "tap-preferred";
  tapping-term-ms = <TAP_MS>;
  quick-tap-ms = <TAP_MS>;
  hold-trigger-key-positions = <0>;
};

&lt {
  flavor = "tap-preferred";
  tapping-term-ms = <TAP_MS>;
  quick-tap-ms = <TAP_MS>;
};

&mmv {
  acceleration-exponent = <1>;
  time-to-max-speed-ms = <1000>;
  delay-ms = <0>;                   
};

#undef MOVE_UP
#undef MOVE_DOWN
#undef MOVE_LEFT
#undef MOVE_RIGHT
#define MOVE_UP MOVE_VERT(-U_MOUSE_MOVE_MAX)
#define MOVE_DOWN MOVE_VERT(U_MOUSE_MOVE_MAX)
#define MOVE_LEFT MOVE_HOR(-U_MOUSE_MOVE_MAX)
#define MOVE_RIGHT MOVE_HOR(U_MOUSE_MOVE_MAX)