//Expt.No. 10: Stepper Motor interfacing to PIC18F458 Microcontroller 
//Includes
//#include <p18f458.h>			//Include Controller specific .h
#include <xc.h>
#pragma config FOSC = HS		//Oscillator Selection 
#pragma config WDT = OFF		//Disable Watchdog timer
#pragma config LVP = OFF		//Disable Low Voltage Programming


void msdelay (unsigned int time) 	// Definition of delay subroutine
{
	unsigned int i, j;
	for (i = 0; i < time; i++)		// Loop for time
		for (j = 0; j < 275; j++);	// Calibrated for a 1 ms delay in MPLAB
}

void main()
{
	TRISB = 0x00;					// Configure PORTB as output port
	INTCON2bits.RBPU=0; 			// Enable internal PULL UPs on PORTB
	while(1)						// Endless loop
	{
		PORTB = 0x03;				// Stepper motor 4-step sequence
		msdelay(100);
		PORTB = 0x06;
		msdelay(100);
		PORTB = 0x0c;
		msdelay(100);
		PORTB = 0x09;
		msdelay(100);

		
	}
}

