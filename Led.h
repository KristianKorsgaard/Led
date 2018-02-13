/*
  Led.h - Library for controlling LEDs
  Created by Kristian Korsgaard, February 12, 2018.
  Released into the public domain.
*/

#ifndef LED_H
#define LED_H

#include "Arduino.h"

class Led
{
public:
  Led(byte pin = 13);
  void begin();
  void on();
  void off();
  void toggle();
  void blink(int delay_MS = 250);

private:
  byte pin_;
  unsigned long lastBlink_MS_;
  bool state_;
};

#endif /* end of include guard: LED_HPP */
