
#include"RCC.h"

void RCC_Enable(GPIO_x *port){
	if(port==GPIOA)
	{
		RCC -> AHB1ENR |= (1<<0);
	}
	else if(port==GPIOB)
	{
		RCC -> AHB1ENR |= (1<<1);
	}
	else if(port==GPIOC)
	{
		RCC -> AHB1ENR |= (1<<2);
	}
	else if(port==GPIOD)
	{
		RCC -> AHB1ENR |= (1<<3);
	}
	else if(port==GPIOE)
	{
		RCC -> AHB1ENR |= (1<<4);
	}
	else if(port==GPIOF)
	{
		RCC -> AHB1ENR |= (1<<5);
	}
	else if(port==GPIOG)
	{
		RCC -> AHB1ENR |= (1<<6);
	}
	else if(port==GPIOH)
	{
		RCC -> AHB1ENR |= (1<<7);
	}
	else if(port==GPIOI)
	{
		RCC -> AHB1ENR |= (1<<8);
	}
	else if(port==GPIOJ)
	{
		RCC -> AHB1ENR |= (1<<9);
	}
	else if(port==GPIOK)
	{
		RCC -> AHB1ENR |= (1<<10);
	}

}



// USING ENUM
/*
void RCC_Enable(rcc enable)
{
	RCC-> AHB1ENR |= (1<<enable);
}*/
