/*
  Led.cpp - Library for controlling LEDs
  Created by Kristian Korsgaard, February 12, 2018.
  Released into the public domain.
*/

#include "Led.h"

Led::Led(byte pin)
: pin_(pin)
{
  lastBlink_MS_ = millis();
  state_ = false;
}

void Led::begin()
{
  pinMode(pin_, OUTPUT);
}

void Led::on()
{
  digitalWrite(pin_, HIGH);
  state_ = true;
}

void Led::off()
{
  digitalWrite(pin_, LOW);
  state_ = false;
}

void Led::toggle()
{
  digitalWrite(pin_, state_ ? LOW : HIGH);
  state_ = !state_;
}

void Led::blink(int delay_MS)
{
  if(millis()-lastBlink_MS_ >= delay_MS)
  {
    lastBlink_MS_ = millis();
    toggle();
  }
}
