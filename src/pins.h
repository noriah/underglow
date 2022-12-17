#ifndef PINS_H_
#define PINS_H_

/**
 * pins.h - Pin definitions for teensy 4.1
 */

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
#define GPIO_MOSFET_LEFT_PIN 5
#define GPIO_MOSFET_FRONT_PIN 4
#define GPIO_MOSFET_RIGHT_PIN 3
#define GPIO_MOSFET_BACK_PIN 2

///////////////
// RGB LED Pins
// data
#define GPIO_NEON_DATA1_PIN 26
#define GPIO_NEON_DATA2_PIN 28
#define GPIO_NEON_DATA3_PIN 11
#define GPIO_NEON_DATA4_PIN 31
// clock
#define GPIO_NEON_CLOCK1_PIN 27
#define GPIO_NEON_CLOCK2_PIN 29
#define GPIO_NEON_CLOCK3_PIN 13
#define GPIO_NEON_CLOCK4_PIN 32

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

#endif  // PINS_H_
