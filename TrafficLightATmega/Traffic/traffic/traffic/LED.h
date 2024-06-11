/*
 * LED.h
 *
 * Created: 10/1/2021 1:06:29 PM
 *  Author: Abdulrhman Nasser
 */ 


#ifndef LED_H_
#define LED_H_
void LED_vInit(unsigned char portname,unsigned char pinnumber);
void LED_vTurnOn (unsigned char portname,unsigned char pinnumber);
void LED_vTurnOff(unsigned char portname, unsigned char pinnumber);
void LED_vToggle(unsigned char portname, unsigned char pinnumber);

#endif /* LED_H_ */