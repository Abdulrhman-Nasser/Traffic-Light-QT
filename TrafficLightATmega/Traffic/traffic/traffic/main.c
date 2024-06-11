/*
 * traffic.c
 *
 * Created: 5/29/2024 6:37:07 PM
 * Author : Sector B5
 */ 

#define F_CPU 8000000
#include <avr/io.h>
#include "std_macros.h"
#include "USART.h"
#include "LED.h"
#define red	'A',0
#define yellow	'A',1
#define green	'A',2
int main(void)
{
    /* Replace with your application code */
	UART_vInit(9600);
	LED_vInit(red);
	LED_vInit(yellow);
	LED_vInit(green);
	//LED_vTurnOn(red);
	char x;
    while (1) 
    {
		x=UART_u8ReceiveData();
		switch (x)
		{
			case 'r':
			LED_vTurnOn(red);
			break;
			case 'y':
			LED_vTurnOn(yellow);
			break;
			case 'g':
			LED_vTurnOn(green);
			break;
			case 'n':
			LED_vTurnOff(red);
			LED_vTurnOff(green);
			LED_vTurnOff(yellow);
			break;
				
		}
    }
}

