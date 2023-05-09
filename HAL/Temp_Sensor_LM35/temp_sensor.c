/*************************************************************************/
/* Author        : Omar Yamany                                    		 */
/* File          : temp_sensor.c                                    	 */
/* Date          : May 9, 2023                                           */
/* Version       : V1                                                    */
/* GitHub        : https://github.com/Piistachyoo             		     */
/*************************************************************************/

#include "temp_sensor.h"

void Temp_vInit(){
	ADC_vInit();
}

u16 Temp_u8GetReading(u8 Copy_u8Channel){
	u16 ADC_Reading, Temp_Value;
	ADC_Reading = ADC_u16Read(Copy_u8Channel);
	Temp_Value = (((u32)ADC_Reading * VREF_VOLTAGE_MV)/ADC_RESOLUTION);
	Temp_Value /= 10;
	return Temp_Value;
}
