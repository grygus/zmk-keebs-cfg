#define AS(keycode) &as LS(keycode) keycode
#define TAP_MS 200
#define QUICK_TAP_MS 0

#define LOWER 1
#define RAISED 2
#define ADJUST 3

&mt {
  flavor = "tap-preferred";
  tapping-term-ms = <TAP_MS>;
  quick-tap-ms = <QUICK_TAP_MS>;
};

&lt {
  flavor = "tap-preferred";
  tapping-term-ms = <TAP_MS>;
  quick-tap-ms = <TAP_MS>;
};
