/* Pins for Calliope mini V3 
This file connects the hardware pin numbers on the left to the array position. 
In Arduino IDE this array position is usually used when calling a pin by number, 
e.g. pinMode(5, INPUT) sets BTN A to input mode */

#include "variant.h"

const uint32_t g_ADigitalPinMap[] = {
  // 0 - 4
  2,  // A0, PAD 0
  3,  // A1, PAD 1
  4,  // A2, PAD 2
  35, // Pad 3, not analog (Calliope exclusive pin)
  28, // A4, COL1

  // 5 - 9
  14, // BTN A
  37, // COL4, P1.05
  11, // COL2
  10, // NFC2
  9,  // NFC1

  // 10-16
  30, // A5, COL5
  23, // BTN B
  12,
  17, // SCK
  1,  // MISO
  13, // MOSI
  29, // A7, C16_A1RX (Calliope change)

  // 17 + 18
  34, // P1.02 C17 (Calliope exclusive pin)
  31, // A3, COL3 (Calliope changed pin number)

  // 19 + 20
  26, // SCL
  32, // SDA, P1.00

  // 21 - 25
  21, // ROW1
  22, // ROW2
  15, // ROW3
  24, // ROW4
  19, // ROW5

  // 26 - 29
  36, // LOGO (touch sensor)
  0,  // SPEAKER (Note: Must use synthesized LF clock to make this pin available)
  20, // RUN_MIC
  5,  // A6, MIC_IN

  // 30 - 31
  16, // I2C_INT_SDA
  8,  // I2C_INT_SCL

  // 32 - 34
  25, // COMBINED_SENSOR_INT
  40, // RX, P1.08
  6,  // TX
  
  // 35 - 40 internal Calliope mini pins
  7, // RGB
  38, // MOTOR_MODE
  33, // M0_DIR
  27, // M0_SPEED
  39, // M1_DIR
  41, // M1_SPEED  
};
