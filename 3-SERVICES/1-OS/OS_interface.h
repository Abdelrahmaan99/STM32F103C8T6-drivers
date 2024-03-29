/********************************************************************************************/
/********************************************************************************************/
/**************************		Author:  Abdelrahman El_Gharbawy	            *************/
/**************************		Date:    10 January 2021	            		*************/
/**************************		Layer:   SERVICES								*************/
/**************************		SWC:	 OS										*************/
/**************************		Version: 1.00 	             					*************/
/********************************************************************************************/
/********************************************************************************************/

/********************************************************************************************/
/* Guard of file will call one time in .c  			                                        */
/********************************************************************************************/
#ifndef OS_INTERFACE_H_
#define OS_INTERFACE_H_

/********************************************************************************************/
/* Functions Prototype					 			                                        */
/********************************************************************************************/
void SOS_voidCreateTask(u8 Copy_u8TaskID , u16 Copy_u16Period , void (*Ptr)(void) , u16 Copy_u16FirstDelay);

void SOS_voidStart(void);

void SOS_voidSuspendTask(u8 Copy_u8TaskID);

void SOS_voidResumeTask(u8 Copy_u8TaskID);

void SOS_voidDeleteTask(u8 Copy_u8TaskID);

#endif
/********************************************************************************************/
/* END OF FILE: OS_interface.h                                                             */
/********************************************************************************************/
