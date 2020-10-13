/*
 * define.h
 *
 *  Created on: 9 ����. 2020 �.
 *      Author: radiolok
 */

#include <msp430.h>

#include "stdint.h"

#ifndef NULL
    #define NULL 0
#endif

#ifndef DEFINE_H_
#define DEFINE_H_

#define SPI_BUFFER_SIZE (32)
#define SPI_BUFFER_MASK (SPI_BUFFER_SIZE - 1)

#define PANEL_WIDTH (32)
#define PANEL_HEIGHT (32)

#define PANEL_ROWS (1)
#define PANEL_COLS (1)

#define DISPLAY_WIDTH (PANEL_WIDTH * PANEL_COLS)
#define DISPLAY_HEIGTH (PANEL_HEIGHT * PANEL_ROWS)

#define ANODE_BYTES ((PANEL_HEIGHT >> 3) * PANEL_ROWS)

#endif /* DEFINE_H_ */
