/**
 * @file dipsw_e.h
 * 
 * @author Milan Popđurđev (m.popdjurdjev@gmail.com)
 * 
 * @brief Header file containing DIP switch configurations for the development board
 * 
 * This file contains everything needed by other modules in order to use this module

 * 
 * @version 0.1
 * @date 2023-10-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef DIPSW_E_H
#define DIPSW_E_H

/**************************************************************************
 * Includes
 **************************************************************************/

#include "config/project.h"

/**************************************************************************
 * Defines
 **************************************************************************/

/**
 * @brief Enum that defines what signal source we're using
 * 
 */
typedef enum{
  SIG_SRC_POT = 0, 
  SIG_SRC_SENS = 1
} ESigSrc;

/**************************************************************************
 * Global variables
 **************************************************************************/

/**
 * @brief Stores the signal source configuration read from the DIP switch
 * 
 * Tells us whether we're using signal from the potentiometer,
 * or the signal from the sensor
 * 
 * @values 0..1 (SIG_SRC_POT/SIG_SRC_SENS)
 */
extern ESigSrc dipsw_g_SignalSrcConfig_e;

/**************************************************************************
 * Function prototypes
 **************************************************************************/

extern void dipsw_f_Init_v(void);
extern void dipsw_f_ReadConfig_v(void);

#endif // DIPSW_E_H