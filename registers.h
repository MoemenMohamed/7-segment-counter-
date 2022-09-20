/*
 * registers.h
 *
 * Created: 9/17/2022 12:00:09 AM
 *  Author: cs1
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_

#include "types.h"
//DIO REGISTERS
//PORT A
#define PORTA (*((volatile uint8_t *)0x3B))
#define DDRA  (*((volatile uint8_t *)0x3A))
#define PINA  (*((volatile uint8_t *)0x39))

//PORT B
#define PORTB (*((volatile uint8_t *)0x38))
#define DDRB  (*((volatile uint8_t *)0x37))
#define PINB  (*((volatile uint8_t *)0x36))

//PORT C
#define PORTC (*((volatile uint8_t *)0x35))
#define DDRC  (*((volatile uint8_t *)0x34))
#define PINC  (*((volatile uint8_t *)0x33))

//PORT D
#define PORTD (*((volatile uint8_t *)0x32))
#define DDRD  (*((volatile uint8_t *)0x31))
#define PIND  (*((volatile uint8_t *)0x30))

/************************************************************************/
/*				Interrupts Registers                                                                     */
/************************************************************************/
#define Status_Reg				(*((volatile uint8_t *)0x5F))


/************************************************************************/
/* ADC Registers                                                        */
/************************************************************************/
#define ADCMUX				    (*((volatile uint8_t *)0x27))
#define ADCSRA				    (*((volatile uint8_t *)0x26))
#define ADCH				    (*((volatile uint8_t *)0x25))
#define ADCL				    (*((volatile uint8_t *)0x24))
#define SFOIR				    (*((volatile uint8_t *)0x50))



/************************************************************************/
/*					Timers Registers                                    */
/************************************************************************/

//Timers0 registers

#define TCCR0  (*((volatile uint8_t *)0x53))
#define TCNT0  (*((volatile uint8_t *)0x52))
#define TIFR   (*((volatile uint8_t *)0x58))
#define OCR0   (*((volatile uint8_t *)0x5C))
#define TIMSK  (*((volatile uint8_t *)0x59))

//Timer1 registers
#define TCCR1A  (*((volatile uint8_t *)0x4F))
#define TCCR1B  (*((volatile uint8_t *)0x4E))
#define TCNT1H  (*((volatile uint8_t *)0x4D))
#define TCNT1L  (*((volatile uint8_t *)0x4C))
#define OCR1AH  (*((volatile uint8_t *)0x4B))
#define OCR1AL  (*((volatile uint8_t *)0x4A))

#endif /* REGISTERS_H_ */