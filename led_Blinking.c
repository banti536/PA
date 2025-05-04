#include <htc.h>               // Header file for PIC microcontroller functions

#define _XTAL_FREQ 8000000     // Define oscillator frequency (8 MHz) for delay functions

void main()
{
  TRISB = 0x00;                // Set PORTB as output (0 = output, 1 = input)
  PORTB = 0x00;                // Initially turn OFF all LEDs (send 0 to PORTB)

  while(1)                     // Infinite loop
  { 
    PORTB = 0xFF;              // Turn ON all LEDs (0xFF = 11111111)
    __delay_ms(10000);         // Wait for 10 seconds (10000 milliseconds)

    PORTB = 0x00;              // Turn OFF all LEDs (0x00 = 00000000)
    __delay_ms(10000);         // Wait for 10 seconds
  }
}
