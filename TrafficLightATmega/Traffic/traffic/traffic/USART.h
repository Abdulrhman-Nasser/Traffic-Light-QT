/*
 * USART.h
 *
 * Created: 7/20/2023 12:54:57 PM
 *  Author: Abdulrhman Nasser
 */ 


#ifndef USART_H_
#define USART_H_

void UART_vInit(unsigned long baud);
void UART_vSendData(char data);
char UART_u8ReceiveData(void);
void UART_vSendString(char* ptr);



#endif /* USART_H_ */