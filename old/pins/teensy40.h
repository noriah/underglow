#ifndef PINS_TEENSY40_H_
#define PINS_TEENSY40_H_

/**
 * pins/teensy40.h - teensy 4.0 pins
 */

// teensy 4.0

///////////////
// button input
// power button
#define PIN_BTN_POWER 20
// cycle button
#define PIN_BTN_CYCLE 21

/////////////////
// indicator LEDs
// status indicator 1
#define PIN_LED_STATUS1 12

/////////////
// relay pins
#define PIN_RELAY_SYSTEM1 8
#define PIN_RELAY_SYSTEM2 9
#define PIN_RELAY_LEFT 5
#define PIN_RELAY_FRONT 4
#define PIN_RELAY_RIGHT 3
#define PIN_RELAY_BACK 2

///////////////
// RGB LED Pins
// data
#define PIN_NEON_DATA 11
// clock
#define PIN_NEON_CLOCK 13

///////////////
// light sensor
// value
#define PIN_LIGHT_SENSOR 19

////////////
// bluetooth
// serial 2
#define MODULE_BT_SERIAL Serial2
// tx to module
#define PIN_BT_TX 8
// rx from module
#define PIN_BT_RX 7
// key to module (output)
#define PIN_BT_KEY 9
// state from module
#define PIN_BT_STATE 10

//////
// gps
// serial 4
#define MODULE_GPS_SERIAL Serial4
// tx to module
#define PIN_GPS_TX 17
// rx from module
#define PIN_GPS_RX 16
// pps from module
#define PIN_GPS_PPS 18

//////////
// CAN bus
// medium speed tx
#define PIN_CAN_MS_TX 1
// medium speed rx
#define PIN_CAN_MS_RX 0
// high speed tx
#define PIN_CAN_HS_TX 22
// high speed rx
#define PIN_CAN_HS_RX 23

#endif  // PINS_TEENSY40_H_
