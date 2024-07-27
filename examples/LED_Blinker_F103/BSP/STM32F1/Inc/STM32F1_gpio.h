/******************************************************************************
 * @file    	STM32F1_gpio.h
 *
 * @Description Header file of STM32F1_gpio.c
 *
 *
 * @date    	2024-07-26
 * @author  	Achraf Hentati	Embedded Systems Engineer
 * @github  	https://github.com/hentati51
 * @email   	hentati51@gmail.com
 *****************************************************************************/
#ifndef STM32F1_GPIO_H
#define STM32F1_GPIO_H

#include "boardConfig.h"

typedef enum {
    GPIO_MODE_INPUT ,
    GPIO_MODE_OUTPUT_PP
} GPIOMode_TypeDef;

typedef enum {
    LOW = 0,
    HIGH = 1,
} GPIOState_TypeDef;

/**
 * @brief Initialize a GPIO pin
 *
 * @param GPIOx GPIO port
 * @param GPIO_Pin GPIO pin number
 * @param direction Pin direction (input or output)
 */
void gpio_pin_init(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIOMode_TypeDef direction);

/**
 * @brief Write a state to a GPIO pin
 *
 * @param GPIOx GPIO port
 * @param GPIO_Pin GPIO pin number
 * @param pin_state Pin state (HIGH or LOW)
 */
void gpio_write_pin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIOState_TypeDef pin_state);

/**
 * @brief Toggle the state of a GPIO pin
 *
 * @param GPIOx GPIO port
 * @param GPIO_Pin GPIO pin number
 */
void gpio_toggle_pin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

#endif // STM32F1_GPIO_H
