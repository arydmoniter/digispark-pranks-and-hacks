#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  DigiKeyboard.write(" ");
  DigiKeyboard.write("here is how to sql inject first find a website or a login page to hack then test if you can sql inject it or it is sql injection safe then write the username followed by '- - or '// or '# then you will be logged in.");
  digitalWrite(LED_BUILTIN, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

}
