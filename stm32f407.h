#ifndef STM32F407_H
#define STM32F407_H

//BASE ADDRESS
#define FLASH_BASE_ADDR   0x08000000U
#define SYSMEM_BASE_ADDR  0x1FFF0000U
#define OPTBYTE_BASE_ADDR 0x1FFFC000U
#define SRAM_BASE_ADDR    0x20000000U

//AHB&APB BASE ADRESSS
#define APB1_BASE_ADDR    0x40000000U
#define APB2_BASE_ADDR    0x40010000U
#define AHB1_BASE_ADDR    0x40020000U
#define AHB2_BASE_ADDR    0x50000000U
#define AHB3_BASE_ADDR    0x60000000U


//AHB1 PERIPHERALS
#define GPIOA_BASE_ADDR        (AHB1_BASE_ADDR)
#define GPIOB_BASE_ADDR        (AHB1_BASE_ADDR + 0X0400)
#define GPIOC_BASE_ADDR        (AHB1_BASE_ADDR + 0X0800)
#define GPIOD_BASE_ADDR        (AHB1_BASE_ADDR + 0X0C00)
#define GPIOE_BASE_ADDR        (AHB1_BASE_ADDR + 0X1000)
#define GPIOF_BASE_ADDR        (AHB1_BASE_ADDR + 0X1400)
#define GPIOG_BASE_ADDR        (AHB1_BASE_ADDR + 0X1800)
#define GPIOH_BASE_ADDR        (AHB1_BASE_ADDR + 0X1C00)
#define GPIOI_BASE_ADDR        (AHB1_BASE_ADDR + 0X2000)
#define GPIOJ_BASE_ADDR        (AHB1_BASE_ADDR + 0X2400)
#define GPIOK_BASE_ADDR        (AHB1_BASE_ADDR + 0X2800)
#define CRC_BASE_ADDR          (AHB1_BASE_ADDR + 0X3000)
#define RCC_BASE_ADDR          (AHB1_BASE_ADDR + 0X3800)
#define BKP_BASE_ADDR          (AHB1_BASE_ADDR + 0X4000)
#define DMA1_BASE_ADDR         (AHB1_BASE_ADDR + 0X6000)
#define DMA2_BASE_ADDR         (AHB1_BASE_ADDR + 0X6400)
#define ETHERNETMAC_BASE_ADDR  (AHB1_BASE_ADDR + 0X8000)
#define DMA2D_BASE_ADDR        (AHB1_BASE_ADDR + 0XB000)


// RCC STRUCTURE
typedef struct
{
	volatile uint32_t  CR;        // Offset 0X00
	volatile uint32_t PLLCFGR;    // Offset 0X04
	volatile uint32_t CFRG;       // Offset 0X08
	volatile uint32_t CIR;        // Offset 0X0C
	volatile uint32_t AHB1RSTR;   // Offset 0X10
	volatile uint32_t AHB2RSTR;   // Offset 0X14
	volatile uint32_t AHB3RSTR;   // Offset 0X18
	volatile uint32_t RESERVED1;  // Offset 0X1C
	volatile uint32_t APB1RSTR;   // Offset 0X20
	volatile uint32_t APB2RSTR;   // Offset 0X24
	volatile uint32_t RESERVED2;  // Offset 0X28
	volatile uint32_t RESERVED3;  // Offset 0X2C
	volatile uint32_t AHB1ENR;    // Offset 0X30
	volatile uint32_t AHB2ENR;    // Offset 0X34
	volatile uint32_t AHB3ENR;    // Offset 0X38
	volatile uint32_t RESERVED4;  // Offset 0X3C
	volatile uint32_t APB1ENR;    // Offset 0X40
	volatile uint32_t APB2ENR;    // Offset 0X44
	volatile uint32_t RESERVED5;  // Offset 0X48
	volatile uint32_t RESERVED6;  // Offset 0X4C
	volatile uint32_t AHB1LPENR;  // Offset 0X50
	volatile uint32_t AHB2LPENR;  // Offset 0X54
	volatile uint32_t AHB3LPENR;  // Offset 0X58
	volatile uint32_t RESERVED7;  // Offset 0X5C
	volatile uint32_t APB1LPENR;  // Offset 0X60
	volatile uint32_t APB2LPENR;  // Offset 0X64
	volatile uint32_t RESERVED8;  // Offset 0X68
	volatile uint32_t RESERVED9;  // Offset 0X6C
	volatile uint32_t BDCR;       // Offset 0X70
	volatile uint32_t CSR;        // Offset 0X74
	volatile uint32_t RESERVED10; // Offset 0X78
	volatile uint32_t RESERVED11; // Offset 0X7C
	volatile uint32_t SSCGR;      // Offset 0X80
	volatile uint32_t PLL12SCFGR; // Offset 0X84
	volatile uint32_t PLLSAICFGR; // Offset 0X88
	volatile uint32_t PLLDCKCFGR; // Offset 0X8C

}Rcc_typedef;


//GPIO STRUCT
typedef struct {
	volatile uint32_t MODER;   // Offset 0X00
	volatile uint32_t OTYPER;  // Offset 0X04
	volatile uint32_t OSPEEDR; // Offset 0X08
	volatile uint32_t PUPDR;   // Offset 0X0C
	volatile uint32_t IDR;     // Offset 0X10
	volatile uint32_t ODR;     // Offset 0X14
	volatile uint32_t BSRR;    // Offset 0X18
	volatile uint32_t LCKR;    // Offset 0X1C
	volatile uint32_t AFRL;    // Offset 0X20
	volatile uint32_t AFRH;    // Offset 0X24

}GPIO_x;


// RCC MACRO
#define RCC (Rcc_typedef*)RCC_BASE_ADDR


// GPIO MACROS
#define GPIOA (GPIO_x*)GPIOA_BASE_ADDR
#define GPIOB (GPIO_x*)GPIOB_BASE_ADDR
#define GPIOC (GPIO_x*)GPIOC_BASE_ADDR
#define GPIOD (GPIO_x*)GPIOD_BASE_ADDR
#define GPIOE (GPIO_x*)GPIOE_BASE_ADDR
#define GPIOF (GPIO_x*)GPIOF_BASE_ADDR
#define GPIOG (GPIO_x*)GPIOG_BASE_ADDR
#define GPIOH (GPIO_x*)GPIOH_BASE_ADDR
#define GPIOI (GPIO_x*)GPIOI_BASE_ADDR
#define GPIOJ (GPIO_x*)GPIOJ_BASE_ADDR
#define GPIOK (GPIO_x*)GPIOK_BASE_ADDR

#endif
