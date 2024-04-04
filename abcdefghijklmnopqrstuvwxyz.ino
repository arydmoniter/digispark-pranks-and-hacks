#include "DigiKeyboard.h"

void setup(){
  DigiKeyboard.write(" ");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.write("notes");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);  
  DigiKeyboard.write("abcdefghijklmnopqrstuvwxyz");
}
void loop(){
}
