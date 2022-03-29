#ifndef MODULE_RELAY_H_
#define MODULE_RELAY_H_

/**
 * module/relay.h - relay module
 */

#include "Arduino.h"
//
#include "common/types.h"

struct Relay {
  pin_t pin;
  bool state;

  inline void init() { pinMode(pin, OUTPUT); }

  inline void on() {
    if (!state) {
      digitalWriteFast(pin, HIGH);
      state = true;
    }
  }

  inline void off() {
    if (state) {
      digitalWriteFast(pin, LOW);
      state = false;
    }
  }

  inline void toggle() {
    if (state)
      off();
    else
      on();
  }
};

#endif  // MODULE_RELAY_H_
