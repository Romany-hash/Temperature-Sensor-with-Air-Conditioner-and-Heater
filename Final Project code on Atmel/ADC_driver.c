/**
 * @brief ADC Driver
 * @date May 8, 2023
 * @author Romany Sobhy
 *
 * @details This driver provides functions to initialize and read from the ADC (Analog-to-Digital Converter) module.
 * The ADC module is used to convert analog input signals into digital values for further processing by the microcontroller.
 * This driver sets up the ADC reference voltage, enables the ADC module, and adjusts the ADC clock.
 * It also provides a function to read the converted digital value from the ADC.
 */
#include <avr/io.h>
#include "std_macros.h"
void ADC_vinit(void)
{
	SET_BIT(ADMUX,REFS0); //configure VREF
	SET_BIT(ADMUX,REFS1);
	SET_BIT(ADCSRA,ADEN); // enable ADC
	/* adjust ADC clock*/
	SET_BIT(ADCSRA,ADPS2);
	SET_BIT(ADCSRA,ADPS1);
}
unsigned short ADC_u16Read(void)
{
	unsigned short read_val;
	
	SET_BIT(ADCSRA,ADSC); // Start ADC conversion
	while(IS_BIT_CLR(ADCSRA,ADIF)); // Wait for conversion to complete
	SET_BIT(ADCSRA,ADIF); // Clear ADIF flag
	read_val = (ADCL); // Read low byte first
	read_val |= (ADCH<<8); // Read high byte and combine with low byte
	
	return read_val;
}