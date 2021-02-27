/*
 * atmega328p-blink.c
 *
 * Created: 2/27/2021 6:59:34 PM
 * Author : rlmarco
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
	DDRB |= 0B00100000;
	PORTB |= 0B00100000;
	
    /* Replace with your application code */
    while (1) 
    {
		PORTB = ~PORTB;
		_delay_ms(1000);
    }
}