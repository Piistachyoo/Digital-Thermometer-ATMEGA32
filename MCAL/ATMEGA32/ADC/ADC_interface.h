/*************************************************************************/
/* Author        : Omar Yamany                                    		 */
/* File          : ADC_interface.h                                 	     */
/* Date          : Feb 24, 2023	                                         */
/* Version       : V1                                                    */
/* GitHub        : https://github.com/Piistachyoo             		     */
/*************************************************************************/

#ifndef MCAL_ATMEGA32_ADC_ADC_INTERFACE_H_
#define MCAL_ATMEGA32_ADC_ADC_INTERFACE_H_


/* Section : Includes */
#include "ADC_config.h"
#include "ADC_private.h"
#include "../../../Services/BIT_MATH/BIT_MATH.h"
#include "../../../Services/STD_TYPES/STD_TYPES.h"

/* Section : Macro Declarations */
/************** Voltage Configuration values **************/
#define ADC_AREF_VOLTAGE		0
#define ADC_AVCC_VOLTAGE		1
#define ADC_INTERNAL_VOLTAGE	2

/************** interrupt enable condition values **************/
#define ADC_ENABLE_IE			0
#define ADC_DISABLE_IE			1

/************** interrupt prescaler selection condition values **************/
#define	ADC_PRE2				0x01
#define	ADC_PRE4				0x02
#define	ADC_PRE8				0x03
#define	ADC_PRE16				0x04
#define	ADC_PRE32				0x05
#define	ADC_PRE64				0x06
#define	ADC_PRE128				0x07

/************** ADC pins condition values **************/
#define ADC_SINGLE_PIN0			0x00
#define ADC_SINGLE_PIN1			0x01
#define ADC_SINGLE_PIN2			0x02
#define ADC_SINGLE_PIN3			0x03
#define ADC_SINGLE_PIN4			0x04
#define ADC_SINGLE_PIN5			0x05
#define ADC_SINGLE_PIN6			0x06
#define ADC_SINGLE_PIN7			0x07

#define ADC_RIGHT_ADJUST		0x00
#define ADC_LEFT_ADJUST			0x01


/* Section : ADC Configuration */
#define ADC_VOLTAGE 	ADC_AREF_VOLTAGE
#define ADC_IE			ADC_DISABLE_IE
#define ADC_PRESCALER	ADC_PRE64 // 8MHZ/64=125KHZ
#define ADC_DATA_ADJUST	ADC_RIGHT_ADJUST

/* Section : Function Declarations */
// This function shall initialize and enable ADC
void ADC_vInit(void);

// This function shall read data from the ADC channel
u16 ADC_u16Read (u8 Copy_u8Channel);

#endif /* MCAL_ATMEGA32_ADC_ADC_INTERFACE_H_ */
