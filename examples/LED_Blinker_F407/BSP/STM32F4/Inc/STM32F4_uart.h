/******************************************************************************
 * @file    	STM32F4_led.h
 *
 * @Description Header file of STM32F4_uart.c
 *
 *
 * @date    	2024-04-27
 * @author  	Achraf Hentati	Embedded Systems Engineer
 * @github  	https://github.com/hentati51
 * @email   	hentati51@gmail.com
 *****************************************************************************/

#ifndef STM32F4_UART_H
#define STM32F4_UART_H

#include "boardConfig.h"

void uart_tx_init(uint32_t  BaudRate );
void uart_init(USART_TypeDef* UART,uint32_t  BaudRate );


void uart_write(USART_TypeDef* UART, int ch);
char uart_read(void);
void uart_write_string(USART_TypeDef* UART , char *str);



void uart_printf(const char *format, ...);
void uart_write_int(USART_TypeDef* UART ,int num) ;

void uart2_enableInterrupt(uint32_t priority);
int uart_interrupt_receive(uint8_t *buffer, uint32_t bufferSize) ;
void uart_rxlntCallback(void);





#endif
