/******************************************************/
/* Author      : Abdelrahman El_Gharbawy              */
/* Date        : 13 August 2021                       */
/* Version     : V01                                  */
/* Description : RCC REGISTER                         */
/******************************************************/


/******************************************************/
/* guard of file will call one time in .c  			  */
/******************************************************/

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

#define RCC_AHB 	0
#define RCC_APB1	1
#define RCC_APB2	2

void RCC_voidInitSysClock(void);

void RCC_voidEnableClock(u8 Copy_u8BusId, u8 Copy_u8PerId);

void RCC_voidDisableClock(u8 Copy_u8BusId, u8 Copy_u8PerId);

#endif
