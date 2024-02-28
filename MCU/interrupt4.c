//Toggle the LED using the SysTick interrupt

#include "stm32F4xx.h"


int main(void) {

	__disable_irq(); /* global disable IRQs */
	RCC->AHB1ENR |= 1; /* enable GPIOA clock */ 
	GPIOA->MODER &=~0x00000C00; /* clear pin mode */ 
	GPIOA->MODER |= 0x00000400; /* setpin to output mode */
/* Configure SysTick */
	SysTick->LOAD = 16000000-1; /* reload with number of clocks persecond */ 
	SysTick->VAL = 0;
	ysTick->CTRL = 7; /* enable SysTick interrupt, use system clock */
	__enable_irq();

	GPIOA->ODR ^= 0x00000020; /* turn on LED */ 
}

void SysTick_Handler(void) {
        while (1) { }
}
