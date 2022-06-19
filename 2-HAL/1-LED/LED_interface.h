/******************************************************/
/* Author      : Abdelrahman El_Gharbawy              */
/* Date        : 15 August 2021                       */
/* Version     : V01                                  */
/* Description : LED                                  */
/******************************************************/


/******************************************************/
/* guard of file will call one time in .c  			  */
/******************************************************/

#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H

void LED_voidLedOn(u8 Copy_u8PORT , u8 Copy_u8PIN);

void LED_voidLedOff(u8 Copy_u8PORT , u8 Copy_u8PIN);

void LED_voidLedToggle(u8 Copy_u8PORT , u8 Copy_u8PIN);


#endif
