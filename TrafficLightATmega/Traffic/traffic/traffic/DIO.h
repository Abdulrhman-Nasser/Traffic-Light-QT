/*
 * DIO.h
 *
 * Created: 10/1/2021 11:04:31 AM
 *  Author: Abdulrhman Nasser
 */


#ifndef DIO_H_
#define DIO_H_
void DIO_vsetPINDir(unsigned char portname,unsigned char pinnumber, unsigned char direction);
void DIO_write(unsigned char portname, unsigned char pinnumber, unsigned char output);
unsigned char DIO_u8read(unsigned char portname, unsigned char pinnumber);
void DIO_toggle (unsigned char portname, unsigned char pinnumber);
void DIO_set_port_direction(unsigned char portname, unsigned char direction);
void DIO_write_port(unsigned char portname, unsigned char output);
unsigned char DIO_read_port (unsigned char portname);
void DIO_vconnectpullup(unsigned char portname, unsigned char pinnumber, unsigned char enable);
void DIO_write_high_nibble(unsigned char portname, unsigned char val);
void DIO_write_low_nibble(unsigned char portname, unsigned char val);




#endif /* DIO_H_ */
