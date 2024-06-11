/*
 * LED.c
 *
 * Created: 10/1/2021 1:06:19 PM
 *  Author: Abdulrhman Nasser
 */ 
#include "DIO.h"
void LED_vInit(unsigned char portname,unsigned char pinnumber)
{
	DIO_vsetPINDir(portname,pinnumber,1);
}
void LED_vTurnOn (unsigned char portname,unsigned char pinnumber)
{
	DIO_write(portname,pinnumber,1);
}
void LED_vTurnOff(unsigned char portname, unsigned char pinnumber)
{
	DIO_write(portname,pinnumber,0);
}
void LED_vToggle(unsigned char portname, unsigned char pinnumber)
{
	DIO_toggle(portname,pinnumber);
}