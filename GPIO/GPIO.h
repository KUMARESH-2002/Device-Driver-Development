#ifndef GPIO_H
#define GPIO_H

#include "stm32f407.h"

typedef enum{
	GPIO_INPUT_MODE  = 0X00,
	GPIO_OUTPUT_MODE = 0X01,
	GPIO_ALTFNC_MODE = 0X02,
	GPIO_ANALOG_MODE = 0X03
}GPIO_MODE;


typedef enum{
	GPIO_PUSH_PULL  = 0,
	GPIO_OPEN_DRAIN = 1
}GPIO_OTYPER;


typedef enum{
	GPIO_LOW_SPEED       = 0X00,
	GPIO_MEDIUM_SPEED    = 0X01,
	GPIO_HIGH_SPEED      = 0X02,
	GPIO_VERY_HIGH_SPEED = 0X03
}GPIO_OSPEEDR;


typedef enum{
	NO_PULL_UP_DOWN = 0X00,
	PULL_UP         = 0X01,
	PULL_DOWN       = 0X02,
	RESERVED        = 0X03
}GPIO_PUPDR;


typedef struct{
	GPIO_MODE    mode;
	GPIO_OTYPER  otype;
	GPIO_OSPEEDR ospeed;
	GPIO_PUPDR   pupdr;
	uint16_t pin;
}GPIO_CONFIG;


void GPIO_Init(GPIO_x *port,GPIO_CONFIG *pinconfig);
void GPIO_Set(GPIO_x *port,uint16_t pin);
uint8_t GPIO_Read(GPIO_x *port,uint16_t pin);
void GPIO_Toggle(GPIO_x *port,uint16_t pin);
uint32_t GPIO_Set_Port(GPIO_x *port,uint32_t value);
void GPIO_Read_Port(GPIO_x *port);

#endif

