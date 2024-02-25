#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
  DigiKeyboard.delay(1000);
  DigiKeyboard.write(" ");//this is not required for apple silicon computers
}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("Terminal");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("sudo shutdown -h now");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(30000); 
}
