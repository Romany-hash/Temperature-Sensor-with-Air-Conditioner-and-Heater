#include <avr/io.h>
#include "ADC_driver.h"
#include "LCD.h"

char read_val;
unsigned short temperatue;

int main(void)
{
	// Set pin directions for control pins of external devices
	DIO_vsetPINDir('D', 0, 1); // Pin D0 as output
	DIO_vsetPINDir('D', 1, 1); // Pin D1 as output
	
	// Initialize the LCD and ADC
	LCD_vInit();
	ADC_vinit();
	
	LCD_vSend_string("temperature="); // Display "temperature=" on the LCD
	
	while (1)
	{
		temperatue = (ADC_u16Read() * 0.25); // Read temperature from ADC and scale it
		
		if (temperatue < 10)
		{
			LCD_movecursor(1, 13); // Move cursor to position (1, 13) on the LCD
			LCD_vSend_char(30); // Display '0' on the LCD
			LCD_vSend_char((temperatue % 10) + 48); // Display the digit in the one's place
			LCD_vSend_char(0xDF); // Display the degree symbol on the LCD
			LCD_vSend_char('c'); // Display 'c' for Celsius on the LCD
		}
		else if (temperatue < 100)
		{
			LCD_movecursor(1, 13); // Move cursor to position (1, 13) on the LCD
			LCD_vSend_char((temperatue / 10) + 48); // Display the digit in the tens place
			LCD_vSend_char((temperatue % 10) + 48); // Display the digit in the one's place
			LCD_vSend_char(0xDF); // Display the degree symbol on the LCD
			LCD_vSend_char('c'); // Display 'c' for Celsius on the LCD
			
			if (temperatue < 20)
			{
				DIO_write('D', 1, 1); // Set pin D1 to high (logic level 1)
			}
			else if (temperatue > 30)
			{
				DIO_write('D', 0, 1); // Set pin D0 to high (logic level 1)
			}
			else
			{
				DIO_write('D', 0, 0); // Set pin D0 to low (logic level 0)
				DIO_write('D', 1, 0); // Set pin D1 to low (logic level 0)
			}
		}
		else
		{
			// No specific actions for temperature greater than or equal to 100
		}
	}
}
