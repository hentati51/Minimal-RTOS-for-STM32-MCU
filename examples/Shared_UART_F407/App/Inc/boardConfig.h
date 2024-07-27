/******************************************************************************
 * @file    	examples/SharedUART/Inc/boardConfig.h
 *
 * @Description This header file configures the microcontroller settings based on
 *          	the defined STM32 series. It includes the appropriate header files
 *          	for the selected microcontroller and sets the bus frequency accordingly.
 *
 * @date    	2024-05-10
 * @author  	Achraf Hentati	Embedded Systems Engineer
 * @github  	https://github.com/hentati51
 * @email   	hentati51@gmail.com
 *****************************************************************************/

#ifndef __BOARDCONFIG_H__
#define __BOARDCONFIG_H_

//#define STM32F103xB

#define STM32F407xx



#if defined(STM32F103xB)
  #include "stm32f1xx.h"
  #define BUS_FREQ			8000000

#elif defined(STM32F407xx)
  #include "stm32f4xx.h"
  #define BUS_FREQ			16000000
#endif





#endif













































