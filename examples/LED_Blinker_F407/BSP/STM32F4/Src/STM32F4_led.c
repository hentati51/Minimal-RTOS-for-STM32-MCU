/******************************************************************************
 * @file    	STM32F4_led.c
 *
 * @Description Drivers for the STM32F407VG Discovery board user LEDs
 *
 *
 * @date    	2024-04-25
 * @author  	Achraf Hentati	Embedded Systems Engineer
 * @github  	https://github.com/hentati51
 * @email   	hentati51@gmail.com
 *****************************************************************************/
#include "STM32F4_led.h"

/*****************************************************************************
 * User LEDs in STM32F407VG Discovery board
		-Green  -->PD12
		-Orange -->PD13
		-Red    -->PD14
		-Bleu   -->PD15
*/

void leds_init(void){

	RCC ->  AHB1ENR   |= RCC_AHB1ENR_GPIODEN; //(1U<<3)


	// configure PIN 12,13,14,15 IN PORTD as output

	GPIOD -> MODER = GPIO_MODER_MODER12_0 ;

	GPIOD -> MODER &= ~(GPIO_MODER_MODER12_1) ;

	GPIOD -> MODER |= GPIO_MODER_MODER13_0 ;

	GPIOD -> MODER &= ~(GPIO_MODER_MODER13_1) ;

	GPIOD -> MODER |= GPIO_MODER_MODER14_0 ;

	GPIOD -> MODER &= ~(GPIO_MODER_MODER14_1) ;

	GPIOD -> MODER |= GPIO_MODER_MODER15_0 ;

	GPIOD -> MODER &= ~(GPIO_MODER_MODER15_1) ;





}



void led_on(LedColor led){
	// using the output data register ODR
	GPIOD -> ODR |= (1U<<led);

	// or using the bit set reset register BSRR
	//GPIOD->BSRR = (1U << 13);


}


void led_off(LedColor led){
	GPIOD -> ODR &= ~(1U<<led);
	//GPIOD->BSRR = (1U << 29);



}



void led_toggle(LedColor led){
	//^=: This is the bitwise XOR
    GPIOD->ODR ^= (1U << led);  // Toggle LED


}
