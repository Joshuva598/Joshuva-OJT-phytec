
#include "stm32f4xx.h"

void delayMs(int n);

int main(void) {
RCC->AHB1ENR |= 1; /* enable GPIOA clock */ 
GPIOA->MODER &=~0x00000C00; /* clear pin mode */ 
GPIOA->MODER |= 0x00000400; /* set pin to output mode */

while (1) {
delayMs(1000); /* delay 1000 ms */ 
GPIOA->ODR ^= 0x00000020; /*toggle red LED */
}
}

void delayMs(int n) { 
int i;
/* Configure SysTick */
SysTick->LOAD = 16000; /* reload with number of clocks permillisecond */ 
SysTick->VAL = 0; /* clear current value register */
SysTick->CTRL = 0x5; /* Enable the timer */

for(i = 0; i < n; i++) {
while((SysTick->CTRL & 0x10000) == 0) /* wait until the COUNTFLAG is set */
{ }
}
SysTick->CTRL = 0; /* Stop the timer (Enable = 0) */
}
