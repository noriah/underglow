#include <stdint.h>

// libraries
#include "Arduino.h"
#include "FastLED.h"

// project headers
#include "common/types.h"
#include "config.h"
#include "module/light_sensor.h"
#include "module/relay.h"
#include "neon/animation.h"
#include "neon/neon.h"
#include "neon/pixels.h"
#include "neon/sections.h"
#include "pins.h"

#define FRAMES_PER_SECOND 60

Relay system_switch{PIN_RELAY_SYSTEM};
Relay relay_left{PIN_RELAY_LEFT};
Relay relay_front{PIN_RELAY_FRONT};
Relay relay_right{PIN_RELAY_RIGHT};
Relay relay_back{PIN_RELAY_BACK};

LightSensor light_sensor{PIN_LIGHT_SENSOR};

void setup() {
  relay_left.init();
  relay_front.init();
  relay_right.init();
  relay_back.init();

  light_sensor.init();

  Neon.init(NEON_ELEMENT_COUNT);
  Neon.setFPS(FRAMES_PER_SECOND);
  Neon.setBrightness(10);

  relay_left.on();
  relay_front.on();
  relay_right.on();
  relay_back.on();
}

uint8_t gHue = 0;
uint8_t idx = 0;
int8_t change = 1;

#define MAX 16
CRGB scratch[MAX];

CRGB head;

void loop() {
  EVERY_N_MILLISECONDS(1000 / FRAMES_PER_SECOND) {
    if (idx >= MAX - 1) {
      change = -1;
    } else if (idx <= 0) {
      change = 1;
    }

    gHue += 7;
    sweepTail(scratch, MAX, head.setHue(gHue), idx, MAX);
    idx += change;
    Neon.write(Full, scratch, MAX);
    Neon.update();
  }
}
