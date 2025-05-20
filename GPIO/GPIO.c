
#ifndef GPIO_C
#define GPIO_C
#include"GPIO.h"

// GPIO INITIALIZATION//
void GPIO_Init(GPIO_x *port,GPIO_CONFIG *pinconfig)
{
	uint16_t pin = pinconfig->pin;

	port->MODER &=~(0X3<<(2*pin));
	port->MODER|=((pinconfig->mode&0x3)<<(pin*2));

	port->OSPEEDR &=~(0X3<<(2*pin));
	port->OSPEEDR|=((pinconfig->ospeed&0x3)<<(pin*2));

	port->OTYPER &=~(1<<pin);
	port->OTYPER|=((pinconfig->otype)<<pin);

	port->PUPDR &=~(0X3<<(pin*2));
	port->PUPDR|=((pinconfig->pupdr&0x3)<<(pin*2));
}

// This Function Sets a GPIO Pin as OUTPUT //
void GPIO_Set(GPIO_x *port,uint16_t pin)
{
		port->ODR|=(1 << pin);
}

// This Function Reads a GPIO Pin //
uint8_t GPIO_Read(GPIO_x *port,uint16_t pin)
{
	return(port->IDR&(1<<pin));
}

// This Function Toggles a GPIO PIN//
void GPIO_Toggle(GPIO_x *port,uint16_t pin)
{
	port->ODR^=(1<<pin);
}

//This Function writes a value to GPIO PORT
uint32_t GPIO_Set_Port(GPIO_x *port,uint32_t value)
{
	port->ODR|=value;
}

// This function reads the value of the Port
void GPIO_Read_Port(GPIO_x *port)
{
	return port->IDR;
}


#endif
