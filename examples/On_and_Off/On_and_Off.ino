/*
   Led class example
   @description Simple example to showcase the Led.h class' on and off methods
   @author Kristian Korsgaard
   @version 1.0
*/

#include <Led.h>

Led led; // Defaults to pin 13, use led(pin_number) if another pin is wanted

void setup() {
  led.begin();
}

void loop() {
  led.on();
  delay(1000);
  led.off();
  delay(1000);
}
