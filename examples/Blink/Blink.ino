/*
   Led class example
   @description Simple example to showcase the Led.h class' blink method
   @author Kristian Korsgaard
   @version 1.0
*/

#include <Led.h>

Led led; // Defaults to pin 13, use led(pin_number) if another pin is wanted

void setup() {
  led.begin();
}

void loop() {
  led.blink(1000);
}
