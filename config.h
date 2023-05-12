/*
Copyright 2020 Richard Sutherland

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


// #define POINTING_DEVICE_INVERT_X

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET              // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.

#define POINTING_DEVICE_DEBUG

#define SPI_DRIVER SPID0

#define POINTING_DEVICE_CS_PIN F7
#define ADNS9800_CS_PIN F7
#define SPI_SCK_PIN B1
#define SPI_MISO_PIN B3
#define SPI_MOSI_PIN B2

// #define POINTING_DEVICE_CS_PIN GP26
// #define ADNS9800_CS_PIN GP26
// #define SPI_SCK_PIN GP18
// #define SPI_MISO_PIN GP20
// #define SPI_MOSI_PIN GP19


// #define MOUSE_EXTENDED_REPORT
// #define ADNS9800_SPI_DIVISOR 8
// #define ADNS9800_CPI 8200
// #define ADNS9800_CLOCK_SPEED 1000000

