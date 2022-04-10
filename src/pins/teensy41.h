#ifndef PINS_TEENSY41_H_
#define PINS_TEENSY41_H_

/**
 * pins/teensy41.h - teensy 4.1 pins
 */

// teensy 4.1
// "production" environment

///////////////
// button input
// power button
#define PIN_BTN_POWER 41
// cycle button
#define PIN_BTN_CYCLE 40

/////////////////
// indicator LEDs
// status indicator 1
#define PIN_LED_STATUS1 13

/////////////
// relay pins
// sides relay
#define PIN_RELAY_LEFT 5
#define PIN_RELAY_FRONT 4
#define PIN_RELAY_RIGHT 3
#define PIN_RELAY_BACK 2

///////////////
// RGB LED Pins
// data
#define PIN_NEON_DATA 26
#define PIN_NEON_DATA2 28
#define PIN_NEON_DATA3 11
#define PIN_NEON_DATA4 31
// clock
#define PIN_NEON_CLOCK 27
#define PIN_NEON_CLOCK2 29
#define PIN_NEON_CLOCK3 13
#define PIN_NEON_CLOCK4 32

///////////////
// light sensor
// value
#define PIN_LIGHT_SENSOR 25

////////////
// bluetooth
// serial 2
#define MODULE_BT_SERIAL Serial2
// tx to module
#define PIN_BT_TX 8
// rx from module
#define PIN_BT_RX 7
// key to module (output)
#define PIN_BT_KEY 6
// state from module
#define PIN_BT_STATE 9

//////
// gps
// serial 8
#define MODULE_GPS_SERIAL Serial8
// tx to module
#define PIN_GPS_TX 35
// rx from module
#define PIN_GPS_RX 34
// pps from module
#define PIN_GPS_PPS 36

//////////
// CAN bus
// medium speed tx
#define PIN_CAN_MS_TX 3
// medium speed rx
#define PIN_CAN_MS_RX 2
// high speed tx
#define PIN_CAN_HS_TX 29
// high speed rx
#define PIN_CAN_HS_RX 30

#endif  // PINS_TEENSY41_H_
