#ifndef __AVR_ATmega16__
    #define __AVR_ATmega16__
#endif    




#include <avr/io.h>

#define F_CPU 1000000  

#include <avr/interrupt.h>

#include <util/delay.h>

 

unsigned int gate_open_flag=0; 

int main()

{

 DDRB = 0xFF;
 
 DDRD = 0x00;

 PORTB=0x00;

 MCUCR = (1<<ISC01) | (0<<ISC00) | (1<<ISC11) | (0<<ISC10);

 GICR=(1<<INT0) | (1<<INT1); 

 sei(); 

 while(1);

}

 

ISR(INT0_vect) 
{ 

PORTB = 0x01; 

_delay_ms(200);

PORTB = 0x00;

if(gate_open_flag==1) 

{

PORTB = 0x04; 

_delay_ms(3000); 

PORTB = 0x00;

gate_open_flag=0; 

PORTB = 0x10; // red LED on

}

else

{

PORTB = 0x08; 

_delay_ms(3000); // to open gate

PORTB = 0x00;

gate_open_flag=1; 

PORTB = 0x20; // green LED on

}

}

ISR(INT1_vect) 

{

PORTB = 0x02; 

_delay_ms(200);

PORTB=0x00;

if(gate_open_flag==1)

{

PORTB = 0x04;

_delay_ms(3000);

PORTB = 0x00;

gate_open_flag=0;

PORTB = 0x10;

}

else

{

PORTB = 0x08;

_delay_ms(3000);

PORTB = 0x00;

gate_open_flag=1;

PORTB = 0x20;

}

}


 