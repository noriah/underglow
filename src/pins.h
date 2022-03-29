#ifndef PINS_H_
#define PINS_H_

/**
 * pins.h - pin definition
 */

#if defined(BOARD_TEENSY40)
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
#define PIN_RELAY_SYSTEM 2
#define PIN_RELAY_LEFT 3
#define PIN_RELAY_FRONT 4
#define PIN_RELAY_RIGHT 5
#define PIN_RELAY_BACK 6

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

#elif defined(BOARD_TEENSY41)
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
#define PIN_RELAY_SYSTEM 32
#define PIN_RELAY_LEFT 28
#define PIN_RELAY_FRONT 29
#define PIN_RELAY_RIGHT 30
#define PIN_RELAY_BACK 31

///////////////
// RGB LED Pins
// data
#define PIN_NEON_DATA 26
// clock
#define PIN_NEON_CLOCK 27

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

#endif

#endif  // PINS_H_
