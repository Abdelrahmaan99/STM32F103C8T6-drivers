/******************************************************/
/* Author      : Abdelrahman El_Gharbawy              */
/* Date        : 18 August 2021                       */
/* Version     : V01                                  */
/* Description : NVIC		                          */
/******************************************************/


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "NVIC_interface.h"
#include "NVIC_private.h"
#include "NVIC_config.h"



void MNVIC_voidInit(void)
{
	#define SCB_AIRCR	*((u32 *)0xE000ED0C)
	SCB_AIRCR = MNVIC_GROUP_SUB_DISTRBUTION;
}
void MNVIC_voidEnableInterrupt(u8 Copy_IntNumber)
{
	if(Copy_IntNumber <= 31)
	{
		NVIC_ISER0 = (1 << Copy_IntNumber);
	}
	else if(Copy_IntNumber <= 59)
	{
		Copy_IntNumber -= 32;
		NVIC_ISER1 = (1 << Copy_IntNumber);
	}
	else
	{
		/* Return Error */
	}
}

void MNVIC_voidDisableInterrupt(u8 Copy_IntNumber)
{
	if(Copy_IntNumber <= 31)
	{
		NVIC_ICER0 = (1 << Copy_IntNumber);
	}
	else if(Copy_IntNumber <= 59)
	{
		Copy_IntNumber -= 32;
		NVIC_ICER1 = (1 << Copy_IntNumber);
	}
	else
	{
		/* Return Error */
	}
}


void MNVIC_voidSetPendingFlag(u8 Copy_IntNumber)
{
	if(Copy_IntNumber <= 31)
	{
		NVIC_ISPR0 = (1 << Copy_IntNumber);
	}
	else if(Copy_IntNumber <= 59)
	{
		Copy_IntNumber -= 32;
		NVIC_ISPR1 = (1 << Copy_IntNumber);
	}
	else
	{
		/* Return Error */
	}
}

void MNVIC_voidClearPendingFlag(u8 Copy_IntNumber)
{
	if(Copy_IntNumber <= 31)
	{
		NVIC_ICPR0 = (1 << Copy_IntNumber);
	}
	else if(Copy_IntNumber <= 59)
	{
		Copy_IntNumber -= 32;
		NVIC_ICPR1 = (1 << Copy_IntNumber);
	}
	else
	{
		/* Return Error */
	}
}

u8 MNVIC_u8GetActiveFlag(u8 Copy_IntNumber)
{
	u8 Local_u8Result = 0;

	if(Copy_IntNumber <= 31)
	{
		Local_u8Result = GET_BIT(NVIC_IABR0 , Copy_IntNumber);
	}
	else if(Copy_IntNumber <= 59)
	{
		Copy_IntNumber -= 32;
		Local_u8Result = GET_BIT(NVIC_IABR1 , Copy_IntNumber);
	}
	else
	{
		/* Return Error */
	}
	return Local_u8Result;
}


void MNVIC_voidSetPriority(s8 Copy_s8IntID , u8 Copy_u8GroupPriority , u8 Copy_u8SubPriority , u32 Copy_u32Group)
{
	u8 Local_u8Priority = Copy_u8SubPriority | (Copy_u8GroupPriority << (Copy_u32Group - 0x05FA0300) / 256);
	/* core peripheral */


	/* external peripheral */
	if(Copy_s8IntID >= 0)
	{
		NVIC_IPR[Copy_s8IntID] = Local_u8Priority << 4;
	}
	SCB_AIRCR = Copy_u32Group;
}


void MNVIC_voidSetPriorittty(u8 Copy_PeripheralIdx , u8 Copy_u8Priority)
{
	if(Copy_PeripheralIdx < 60)
	{
		NVIC_IPR[Copy_PeripheralIdx] = Copy_u8Priority;
	}
	else
	{
		/* Return Error */
	}
}
