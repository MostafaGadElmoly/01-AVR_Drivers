/*
DIO_Config.h
Auther : Mostafa
Layer  : MCAL
SWC    : DIO/GPIO

*/
#ifndef _DIO_INTERFACE_H_
#define _DIO_INTERFACE_H_

// Defination of the direction
#define DIO_PIN_OUTPUT 1
#define DIO_PIN_INPUT 0

// Defination of the ports
#define DIO_PORTB 0
#define DIO_PORTC 1
#define DIO_PORTD 2

// Defination of PIN Number

#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7

// Defenation of Value

#define DIO_PIN_HIGH 1
#define DIO_PIN_LOW 0

//
#define ALL_PINS_HIGH     1
#define ALL_PINS_LOW      0
#define MIXED_PIN_VALUES  2

//Set PORT VAlues
#define DIO_PORT_HIGH  0xFF
#define DIO_PORT_LOW   0x00

//add enum for errors

typedef enum
{
    DIO_NOK,
    DIO_OK
}DIO_ERROR_STAT;



void DIO_VOIDSetPinDirection(u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Direction);
void DIO_VOIDSetPinValue(u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Value);
u8 DIO_VOIDGetPinValue(u8 Copy_u8PORT, u8 Copy_u8PIN);
void DIO_VOIDTogglePinValue(u8 Copy_u8PORT, u8 Copy_u8PIN);

// Tasks
void DIO_VOIDSetPortirection(u8 Copy_u8PORT, u8 Copy_u8Direction);
void DIO_VOIDSetPortValue(u8 Copy_u8PORT, u8 Copy_u8Value);
u8 DIO_VOIDGetPortValue(u8 Copy_u8PORT);
void DIO_VOIDTogglePortValue(u8 Copy_u8PORT);

#endif