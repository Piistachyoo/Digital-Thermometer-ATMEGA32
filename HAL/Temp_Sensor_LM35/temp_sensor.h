/*************************************************************************/
/* Author        : Omar Yamany                                    		 */
/* File          : temp_sensor.h                                    	 */
/* Date          : May 9, 2023                                           */
/* Version       : V1                                                    */
/* GitHub        : https://github.com/Piistachyoo             		     */
/*************************************************************************/

#ifndef HAL_TEMP_SENSOR_LM35_TEMP_SENSOR_H_
#define HAL_TEMP_SENSOR_LM35_TEMP_SENSOR_H_

/* Section : Includes */
#include "../../MCAL/ATMEGA32/ADC/ADC_interface.h"
#include "../../Services/STD_TYPES/STD_TYPES.h"

/* Section : Macro Declarations */
#define VREF_VOLTAGE_MV		5000UL
#define ADC_CHANNEL			ADC_SINGLE_PIN0
#define ADC_RESOLUTION		1024UL

/* Section : Macro Functions Declarations */

/* Section : Data Type Declarations */

/* Section : Function Declarations */
void Temp_vInit();
u16 Temp_u8GetReading(u8 Copy_u8Channel);

#endif /* HAL_TEMP_SENSOR_LM35_TEMP_SENSOR_H_ */
