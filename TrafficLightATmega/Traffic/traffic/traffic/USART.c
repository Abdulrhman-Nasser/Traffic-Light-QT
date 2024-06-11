/*
 * USART.c
 *
 * Created: 7/20/2023 12:54:35 PM
 *  Author: Abdulrhman Nasser
 */ 
#define F_CPU 8000000UL
#include <util/delay.h>
#include <avr/io.h>
#include "std_macros.h"

void UART_vInit (unsigned long baud)
{
	// Choosing the baud rate
	unsigned short baudrate=(F_CPU/(16*baud))-1;
	UBRRH =(unsigned char)(baudrate>>8);
	UBRRL =(unsigned char) baudrate;
	// Enable trasmit and recieve
	SET_BIT(UCSRB,TXEN);
	SET_BIT(UCSRB,RXEN);
	//Choose number of data bits (8) and parity (no parity) and stop bits (1) 
	UCSRC=(1<<URSEL)|(1<<UCSZ1)|(1<<UCSZ0);
}
void UART_vSendData(char data)
{
	//wait for UDR transmit buffer to be empty
	while (!READ_BIT(UCSRA,UDRE));
	//Put data in UDR
	UDR=data;
}
char UART_u8ReceiveData(void)
{
	//wait for UDR recieve buffer to be filled with data
	while (!READ_BIT(UCSRA,RXC));
	return UDR;
}
void UART_vSendString(char* ptr)
{
	while(*ptr!=0)
	{
		UART_vSendData(*ptr);
		ptr++;
		_delay_ms(100);
	}
}


