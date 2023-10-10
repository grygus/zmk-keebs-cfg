#define AS(keycode) &as LS(keycode) keycode
#define TAP_MS 200

#define LOWER 1
#define RAISED 2
#define ADJUST 3

&mt {
  flavor = "balanced";
  tapping-term-ms = <TAP_MS>;
  quick-tap-ms = <0>;
};

&lt {
  flavor = "tap-preferred";
  tapping-term-ms = <TAP_MS>;
  quick-tap-ms = <TAP_MS>;
};
