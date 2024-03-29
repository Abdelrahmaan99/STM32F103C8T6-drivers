/********************************************************************************************/
/********************************************************************************************/
/**************************		Author:  Abdelrahman El_Gharbawy	            *************/
/**************************		Date:    22 November 2020	            		*************/
/**************************		Layer:   HAL								   	*************/
/**************************		SWC:	 SSD									*************/
/**************************		Version: 1.00 	             					*************/
/********************************************************************************************/
/********************************************************************************************/


/********************************************************************************************/
/* Guard of file will call one time in .c  			                                        */
/********************************************************************************************/
#ifndef SSD_INTERFACE_H
#define SSD_INTERFACE_H

/********************************************************************************************/
/* Define function parameters  			 			                                        */
/********************************************************************************************/
/* Copy_u8TYPE */
#define SSD_CATHODE			1
#define SSD_ANODE			2

/* Copy_u8NUMBER */
#define SSD_NUMBER0			0
#define SSD_NUMBER1			1
#define SSD_NUMBER2			2
#define SSD_NUMBER3			3
#define SSD_NUMBER4			4
#define SSD_NUMBER5			5
#define SSD_NUMBER6			6
#define SSD_NUMBER7			7
#define SSD_NUMBER8			8
#define SSD_NUMBER9			9

/* Copy_u8HalfPort */
#define SSD_1ST_HALF_PORT	1
#define SSD_2ND_HALF_PORT	2


/********************************************************************************************/
/* Functions Prototype					 			                                        */
/********************************************************************************************/
u8 HSSD_u8DisplayNumber(u8 Copy_u8Type , u8 Copy_u8Number , u8 Copy_u8Port , u8 Copy_u8HalfPort);

#endif
/********************************************************************************************/
/* END OF FILE: SSD_interface.h                                                             */
/********************************************************************************************/
