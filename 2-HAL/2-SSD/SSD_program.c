/******************************************************/
/* Author      : Abdelrahman El_Gharbawy              */
/* Date        : 15 August 2021                       */
/* Version     : V01                                  */
/* Description : SSD            			          */
/******************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"

#include "SSD_interface.h"
#include "SSD_private.h"
#include "SSD_config.h"

void SSD_voidDisplay(u8 Copy_u8TYPE , u8 Copy_u8NUMBER)
{
	MGPIO_voidSetPinDirection(GPIOA , PIN0 , OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(GPIOA , PIN1 , OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(GPIOA , PIN2 , OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(GPIOA , PIN3 , OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(GPIOA , PIN4 , OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(GPIOA , PIN5 , OUTPUT_SPEED_10MHZ_PP);
	MGPIO_voidSetPinDirection(GPIOA , PIN6 , OUTPUT_SPEED_10MHZ_PP);

	switch(Copy_u8TYPE)
	{
	case SSD_CATHODE:
		if(Copy_u8NUMBER == SSD_NUMBER0)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , LOW);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER1)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , LOW);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER2)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , HIGH);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER3)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , HIGH);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER4)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , HIGH);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER5)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , HIGH);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER6)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , HIGH);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER7)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , LOW);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER8)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , HIGH);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER9)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , HIGH);
		}
		break;



	case SSD_ANODE  :
		if(Copy_u8NUMBER == SSD_NUMBER0)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , HIGH);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER1)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , HIGH);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER2)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , LOW);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER3)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , LOW);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER4)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , LOW);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER5)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , LOW);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER6)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , LOW);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER7)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , HIGH);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER8)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , LOW);
		}
		else if(Copy_u8NUMBER == SSD_NUMBER9)
		{
			MGPIO_voidSetPinValue(GPIOA , PIN0 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN1 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN2 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN3 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN4 , HIGH);
			MGPIO_voidSetPinValue(GPIOA , PIN5 , LOW);
			MGPIO_voidSetPinValue(GPIOA , PIN6 , LOW);
		}
		break;

	default			: break;
	}

}
