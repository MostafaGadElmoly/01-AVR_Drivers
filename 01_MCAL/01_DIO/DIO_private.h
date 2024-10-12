/*
DIO_Private.h
Auther : Mostafa
Layer  : MCAL
SWC    : DIO/GPIO

*/
#ifndef _DIO_PRIVATE_H_
#define _DIO_PRIVATE_H_


/* Group B*/

#define PORTB *((volatile u8*)0x2B)
#define DDRB  *((volatile u8*)0x2A)
#define PINB  *((volatile u8*)0x29)


/* Group C*/

#define PORTC *((volatile u8*)0x28)
#define DDRC  *((volatile u8*)0x27)
#define PINC  *((volatile u8*)0x26)


/* Group D*/

#define PORTD *((volatile u8*)0x25)
#define DDRD  *((volatile u8*)0x24)
#define PIND  *((volatile u8*)0x23)


#endif