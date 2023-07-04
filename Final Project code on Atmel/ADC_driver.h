/**
 * @file ADC_driver.h
 * @date May 8, 2023
 * @author Romany Sobhy
 *
 * @details
 * This file contains SW INTERFACES DECLARATIONS for ADC driver.
 */


#ifndef ADC_DRIVER_H_
#define ADC_DRIVER_H_


/*------------------ SW INTERFACES DECLARATIONS -------------------------*/

void ADC_vinit(void);
unsigned short ADC_u16Read(void);

/*------------------ SW INTERFACES DECLARATIONS END ---------------------*/


#endif /* ADC_DRIVER_H_ */