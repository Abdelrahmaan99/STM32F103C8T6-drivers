/******************************************************/
/* Author      : Abdelrahman El_Gharbawy              */
/* Date        : 15 August 2021                       */
/* Version     : V01                                  */
/* Description : LED		                          */
/******************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"

#include "LED_interface.h"
#include "LED_private.h"
#include "LED_config.h"

void LED_voidLedOn(u8 Copy_u8PORT , u8 Copy_u8PIN)
{
	/*SET PORT && PIN && MODE*/
	MGPIO_voidSetPinDirection(Copy_u8PORT , Copy_u8PIN , OUTPUT_SPEED_10MHZ_PP);

	/*SET PIN HIGH*/
	MGPIO_voidSetPinValue(Copy_u8PORT , Copy_u8PIN , HIGH);
}


void LED_voidLedOff(u8 Copy_u8PORT , u8 Copy_u8PIN)
{
	/*SET PORT && PIN && MODE*/
	MGPIO_voidSetPinDirection(Copy_u8PORT , Copy_u8PIN , OUTPUT_SPEED_10MHZ_PP);

	/*SET PIN LOW*/
	MGPIO_voidSetPinValue(Copy_u8PORT , Copy_u8PIN , LOW);
}


void LED_voidLedToggle(u8 Copy_u8PORT , u8 Copy_u8PIN)
{
	u16 Local_u16Counter = 500;

	LED_voidLedOn(Copy_u8PORT , Copy_u8PIN);
	for(u16 i = 0; i < Local_u16Counter; i++)
	{
		for(u16 j = 0; j < Local_u16Counter; j++)
		{
			asm("NOP");
		}
	}

	LED_voidLedOff(Copy_u8PORT , Copy_u8PIN);
	for(u16 i = 0; i < Local_u16Counter; i++)
	{
		for(u16 j = 0; j < Local_u16Counter; j++)
		{
			asm("NOP");
		}
	}
}
