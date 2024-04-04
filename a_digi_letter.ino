#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  DigiKeyboard.write(" ");
  DigiKeyboard.write("Hello mr Matthew this is a Digispark you can buy it on amazon hope you like my invention. I did not create the Digispark. I was the one who coded it I did not make the Digispark. Hope you don't use this for hacking. The last thing do you want me to teach you how to write stuff with a Digispark?");
  digitalWrite(LED_BUILTIN, HIGH);
  

}

void loop() {
  // put your main code here, to run repeatedly:
}
