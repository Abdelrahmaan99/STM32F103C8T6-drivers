/******************************************************/
/* Author      : Abdelrahman El_Gharbawy              */
/* Date        : 18 August 2021                       */
/* Version     : V01                                  */
/* Description : NVIC                                 */
/******************************************************/


/******************************************************/
/* guard of file will call one time in .c  			  */
/******************************************************/

#ifndef NVIC_PRIVATE_H
#define NVIC_PRIVATE_H

#define	NVIC_ISER0				*((u32*)0xE000E100)	 /* Enable External interrupts from 0 to 31 */
#define NVIC_ISER1				*((u32*)0xE000E104)	 /* Enable External interrupts from 32 to 63 */

#define	NVIC_ICER0				*((u32*)0xE000E180)	 /* Disable External interrupts from 0 to 31 */
#define NVIC_ICER1				*((u32*)0xE000E184)	 /* Disable External interrupts from 32 to 63 */

#define NVIC_ISPR0              *((u32*)0xE000E200)
#define NVIC_ISPR1              *((u32*)0xE000E204)

#define NVIC_ICPR0              *((u32*)0xE000E280)
#define NVIC_ICPR1              *((u32*)0xE000E284)

#define NVIC_IABR0				*((volatile u32*)0xE000E300)
#define NVIC_IABR1				*((volatile u32*)0xE000E300)


#define  MNVIC_GROUP_4_SUB_0	0x05FA0300
#define  MNVIC_GROUP_3_SUB_1	0x05FA0400
#define  MNVIC_GROUP_2_SUB_2	0x05FA0500
#define  MNVIC_GROUP_1_SUB_3	0x05FA0600
#define  MNVIC_GROUP_0_SUB_4	0x05FA0700

#define NVIC_IPR				 ((u8 *)0xE000E400)
#define SCB_AIRCR			    *((u32 *)0xE000ED0C)

#endif
