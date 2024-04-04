#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
  DigiKeyboard.delay(1000);
  DigiKeyboard.write(" ");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.write("safari");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.delay(2000);
  DigiKeyboard.write("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  DigiKeyboard.sendKeyStroke(40);

}

void loop() {
  // put your main code here, to run repeatedly:

}
