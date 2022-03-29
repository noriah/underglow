#ifndef MODULE_LIGHT_SENSOR_H_
#define MODULE_LIGHT_SENSOR_H_

/**
 * module/light_sensor.h - light sensor interface
 */

#include <stdint.h>

#include "Arduino.h"
//
#include "common/types.h"

struct LightSensor {
  pin_t pin;

  inline void init() { pinMode(pin, INPUT); }

  inline float readPercent() { return (float)readInternal() / 1023.0; }
  inline float readFloat() { return (float)readInternal(); }
  inline uint16_t read16Bit() { return (uint16_t)readInternal(); }
  inline uint8_t read8Bit() { return map(readInternal(), 0, 1023, 0, UINT8_MAX); }

  inline int readInternal() { return analogRead(pin); }
};

#endif  // MODULE_LIGHT_SENSOR_H_
