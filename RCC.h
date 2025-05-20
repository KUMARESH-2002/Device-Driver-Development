#ifndef RCC_H
#define RCC_H

#include "stm32f407.h"

typedef enum
{
    PORTA = 0,
    PORTB = 1,
    PORTC = 2,
    PORTD = 3,
    PORTE = 4,
    PORTF = 5,
	PORTG = 6,
	PORTH = 7,
	PORTI = 8,
	PORTJ = 9,
	PORTK = 10,
} rcc;

void RCC_Enable(rcc enable);
