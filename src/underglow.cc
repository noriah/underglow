#include <stdint.h>

// libraries
#include "Arduino.h"
#include "FastLED.h"

// project headers
#include "common/types.h"
#include "config.h"
#include "lights.h"
#include "module/light_sensor.h"
#include "module/relay.h"
#include "neon/animation.h"
#include "neon/neon.h"
#include "neon/pixels.h"
#include "neon/sections.h"
#include "pins.h"

#define FRAMES_PER_SECOND 30

Relay relay_left{PIN_RELAY_LEFT};

#if defined(BOARD_TEENSY41)

NeonStrip stripConfigs[] = {{STRIP_LEFT_INDEX, STRIP_LEFT_SIZE, LOW, LOW},
                            {STRIP_FRONT_INDEX, STRIP_FRONT_SIZE, LOW, HIGH},
                            {STRIP_RIGHT_INDEX, STRIP_RIGHT_SIZE, HIGH, LOW},
                            {STRIP_BACK_INDEX, STRIP_BACK_SIZE, HIGH, HIGH}};

Relay relay_front{PIN_RELAY_FRONT};
Relay relay_right{PIN_RELAY_RIGHT};
Relay relay_back{PIN_RELAY_BACK};
#endif

LightSensor light_sensor{PIN_LIGHT_SENSOR};

void setup() {
  relay_left.init();

#if defined(BOARD_TEENSY41)
  relay_front.init();
  relay_right.init();
  relay_back.init();
#endif

  light_sensor.init();

#if defined(BOARD_TEENSY40)
  Neon.init(NEON_ELEMENT_COUNT);

#elif defined(BOARD_TEENSY41)
  // Neon.init(STRIP_LEFT_SIZE, STRIP_FRONT_SIZE, STRIP_RIGHT_SIZE, STRIP_BACK_SIZE);
  Neon.init(NEON_ELEMENT_COUNT, PIN_RELAY_SYSTEM1, PIN_RELAY_SYSTEM2, stripConfigs, STRIP_COUNT);

#endif

  Neon.setFPS(FRAMES_PER_SECOND);
  // Neon.setBrightness(255);
  Neon.brightness = 50;

  relay_left.on();

#if defined(BOARD_TEENSY41)
  relay_front.on();
  relay_right.on();
  relay_back.on();
#endif
}

uint8_t gHue = 0;
uint8_t idx = 0;
int8_t change = 1;

#define MAX 16

CRGB scratch[MAX];
CRGB head;

void loop() {
  EVERY_N_MILLISECONDS(1000 / FRAMES_PER_SECOND) {
    sweepTail(scratch, MAX, head.setHue(gHue), idx, MAX);
    // fill_rainbow(scratch, MAX, gHue);

    Neon.write(Full, scratch, MAX);
    Neon.update();

    if (idx >= MAX - 1) {
      change = -1;
    } else if (idx <= 0) {
      change = 1;
    }

    idx += change;
    gHue += 3;
  }
}
