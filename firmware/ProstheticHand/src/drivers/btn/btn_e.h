/**
 * @file btn_e.h
 * 
 * @author your name (you@domain.com)
 * 
 * @brief Header file for the corresponding btn.cpp
 * 
 *  *  @todo Aleksa Heler: add comment for this file (what is located here?)
 *  @todo Aleksa Heler: add structure that defines button input, so that it's modular
 * 
 * @version 0.1
 * @date 2023-09-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef BTN_E_H
#define BTN_E_H


/**************************************************************************
 * Includes
 **************************************************************************/

#include "config/project.h"

/**************************************************************************
 * Defines
 **************************************************************************/

#define BTN_0 GPIO_NUM_34
#define BTN_1 GPIO_NUM_35
#define BTN_2 GPIO_NUM_36 // VP
#define BTN_3 GPIO_NUM_39 // VN

#define BTN_TAG "BTN"

/**************************************************************************
 * Global variables
 **************************************************************************/

/**
 * Buffer for storing if a button is pressed
 *
 * @values 0..1 (HIGH/LOW, TRUE/FALSE...)
 */
extern uint8_t btn_BtnStates_u8[4];

/**************************************************************************
 * Function prototypes
 **************************************************************************/

extern void btn_Init_v( void );
extern void btn_Handle_v( void );
#ifdef SERIAL_DEBUG
extern void btn_SerialDebug_v( void );
#endif

#endif // BTN_E_H