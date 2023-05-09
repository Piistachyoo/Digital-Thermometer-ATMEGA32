/*************************************************************************/
/* Author        : Omar Yamany                                    		 */
/* File          : main.c                                  	     		 */
/* Date          : May 6, 2023	                                         */
/* Version       : V1                                                    */
/* GitHub        : https://github.com/Piistachyoo             		     */
/*************************************************************************/

#include "HAL/LCD/lcd_interface.h"
#include "HAL/Temp_Sensor_LM35/temp_sensor.h"
#include <util/delay.h>


LCD_4bit_cfg myLCD = {
		.LCD_PORT = 3, .LCD_RS_PIN = 2, .LCD_EN_PIN = 3
};

void app_init();

int main(void){

	/* Initialization */
	app_init();
	u16 Tempreature_Value;

	while(1){
		Tempreature_Value = Temp_u8GetReading(ADC_SINGLE_PIN0);
		LCD_4bit_SetCursorPosition(&myLCD, 13, ROW2);
		LCD_4bit_vSendNumber(&myLCD, Tempreature_Value);
		LCD_4bit_vSendChar(&myLCD, 'C');
		_delay_ms(1500);
		LCD_4bit_vSendString_pos(&myLCD, (u8*)"     ", ROW2, 13);
	}
	return 0;
}

void app_init(){
	LCD_4bit_vInit(&myLCD);
	ADC_vInit();
	LCD_4bit_vSendString_pos(&myLCD, (u8*)"Thermometer", ROW1, 3);
	LCD_4bit_vSendString_pos(&myLCD, (u8*)"Tempreature: ", ROW2, 1);
}
