 
#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
  DigiKeyboard.write(" ");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("Terminal");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("sudo shutdown -h now");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("replace with your password");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
 

}

void loop() {
  // put your main code here, to run repeatedly:

}
