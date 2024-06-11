/*
 * DIO.c
 *
 * Created: 10/1/2021 11:04:14 AM
 *  Author: Abdulrhman Nasser
 */
#include <avr/io.h>
#include "std_macros.h"

void DIO_vsetPINDir(unsigned char portname,unsigned char pinnumber, unsigned char direction)
{
	switch (portname)
	{
		case'A':
		case 'a':
		if(direction==1)
		{
			SET_BIT(DDRA,pinnumber);
		}
		else
		{
			CLR_BIT(DDRA,pinnumber);
		}
		break;
		case'B':
		case'b':
		if(direction==1)
		{
			SET_BIT(DDRB,pinnumber);
		}
		else
		{
			CLR_BIT(DDRB,pinnumber);
		}
		break;
		case'C':
		case'c':
		if(direction==1)
		{
			SET_BIT(DDRC,pinnumber);
		}
		else
		{
			CLR_BIT(DDRC,pinnumber);
		}
		break;
		case'D':
		case'd':
		if(direction==1)
		{
			SET_BIT(DDRD,pinnumber);
		}
		else
		{
			CLR_BIT(DDRD,pinnumber);
		}
		break;
		default:
		break;
	}
}

void DIO_write(unsigned char portname, unsigned char pinnumber, unsigned char output)
{

	switch (portname)
	{
		case'A':
		case 'a':
		if(output==1)
		{
			SET_BIT(PORTA,pinnumber);
		}
		else
		{
			CLR_BIT(PORTA,pinnumber);
		}
		break;
		case'B':
		case'b':
		if(output==1)
		{
			SET_BIT(PORTB,pinnumber);
		}
		else
		{
			CLR_BIT(PORTB,pinnumber);
		}
		break;
		case'C':
		case'c':
		if(output==1)
		{
			SET_BIT(PORTC,pinnumber);
		}
		else
		{
			CLR_BIT(PORTC,pinnumber);
		}
		break;
		case'D':
		case'd':
		if(output==1)
		{
			SET_BIT(PORTD,pinnumber);
		}
		else
		{
			CLR_BIT(PORTD,pinnumber);
		}
		break;
		default:
		break;
	}
}
unsigned char DIO_u8read(unsigned char portname, unsigned char pinnumber)
{
	unsigned char return_value=0;
	switch (portname)
	{
		case'A':
		case 'a':
		return_value=READ_BIT(PINA,pinnumber);
		break;
		case'B':
		case'b':
		return_value=READ_BIT(PINB,pinnumber);
		break;
		case'C':
		case'c':
		return_value=READ_BIT(PINC,pinnumber);
		break;
		case'D':
		case'd':
		return_value=READ_BIT(PIND,pinnumber);
		break;
		default:
		break;
	}
	return return_value;
}

void DIO_toggle (unsigned char portname, unsigned char pinnumber)
{
	switch (portname)
	{
		case'A':
		case 'a':
		TOG_BIT(PORTA,pinnumber);
		break;
		case'B':
		case'b':
		TOG_BIT(PORTB,pinnumber);
		break;
		case'C':
		case'c':
		TOG_BIT(PORTC,pinnumber);
		break;
		case'D':
		case'd':
		TOG_BIT(PORTD,pinnumber);
		break;
		default:
		break;
	}
}
void DIO_set_port_direction(unsigned char portname, unsigned char direction)
{
	switch (portname)
	{
		case'A':
		case 'a':
		DDRA=direction;
		break;
		case'B':
		case'b':
		DDRB=direction;
		break;
		case'C':
		case'c':
		DDRC=direction;
		break;
		case'D':
		case'd':
		DDRD=direction;
		break;
		default:
		break;
	}
}
void DIO_write_port(unsigned char portname, unsigned char output)
{
	switch (portname)
	{
		case'A':
		case 'a':
		PORTA=output;
		break;
		case'B':
		case'b':
		PORTB=output;
		break;
		case'C':
		case'c':
		PORTC=output;
		break;
		case'D':
		case'd':
		PORTD=output;
		break;
		default:
		break;
	}
}
unsigned char DIO_read_port (unsigned char portname)
{
	unsigned char return_value=0;
	switch (portname)
	{
		case'A':
		case 'a':
		return_value=PINA;
		break;
		case'B':
		case'b':
		return_value=PINB;
		break;
		case'C':
		case'c':
		return_value=PINC;
		break;
		case'D':
		case'd':
		return_value=PIND;
		break;
		default:
		break;
	}
	return return_value;
}
void DIO_vconnectpullup(unsigned char portname, unsigned char pinnumber, unsigned char enable)
{
    switch (portname)
	{
		case'A':
		case 'a':
		if(enable==1)
		{
			SET_BIT(PORTA,pinnumber);
		}
		else
		{
			CLR_BIT(PORTA,pinnumber);
		}
		break;
		case'B':
		case'b':
		if(enable==1)
		{
			SET_BIT(PORTB,pinnumber);
		}
		else
		{
			CLR_BIT(PORTB,pinnumber);
		}
		break;
		case'C':
		case'c':
		if(enable==1)
		{
			SET_BIT(PORTC,pinnumber);
		}
		else
		{
			CLR_BIT(PORTC,pinnumber);
		}
		break;
		case'D':
		case'd':
		if(enable==1)
		{
			SET_BIT(PORTD,pinnumber);
		}
		else
		{
			CLR_BIT(PORTD,pinnumber);
		}
		break;
		default:
		break;
	}
}
void DIO_write_low_nibble(unsigned char portname,unsigned char value)
{
	value&=0x0f;
	switch(portname)
	{
		case 'A':
		PORTA&=0xf0;
		PORTA|=value;
		case 'B':
		PORTB&=0xf0;
		PORTB|=value;
		case 'C':
		PORTC&=0xf0;
		PORTC|=value;
		case 'D':
		PORTD&=0xf0;
		PORTD|=value;
	}
}

void DIO_write_high_nibble(unsigned char portname,unsigned char value)
{
	value<<=4;
	switch(portname)
	{
		case 'A':
		PORTA&=0x0f;
		PORTA|=value;
		case 'B':
		PORTB&=0x0f;
		PORTB|=value;
		case 'C':
		PORTC&=0x0f;
		PORTC|=value;
		case 'D':
		PORTD&=0x0f;
		PORTD|=value;
	}
}