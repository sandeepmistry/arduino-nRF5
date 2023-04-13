/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2016 Frank Holtz. All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_ADAFRUIT_BLE_UART_FRIEND_
#define _VARIANT_ADAFRUIT_BLE_UART_FRIEND_

/** Master clock frequency */
#define VARIANT_MCK       (16000000ul)

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

#define PINS_COUNT           (8u)
#define NUM_DIGITAL_PINS     (8u)
#define NUM_ANALOG_INPUTS    (0u)
#define NUM_ANALOG_OUTPUTS   (0u)

// LEDs
#define PIN_LED1                (19)
#define PIN_LED2                (18)
#define LED_BUILTIN             PIN_LED1

// Other digital pins
#define PIN_DFU             (7)
#define PIN_MODE            (1)

/*
 * Serial interfaces
 */
#define PIN_SERIAL_RX       (11)
#define PIN_SERIAL_CTS      (10)
#define PIN_SERIAL_TX       (9)
#define PIN_SERIAL_RTS      (8)

#ifdef __cplusplus
}
#endif

#endif
