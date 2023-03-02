/*
 * steper_motor.c
 *
 * Created: 3/2/2023 12:35:40 AM
 *  Author: CONNECT
 */ 


#include "STD_Types.h"
#include "Bit_Math.h"
#include "avr/delay.h"
#include "dio.h"
#include "steper_motor.h"
#include "steper_motor_confg.h"


/****************************************************************/
/* Description    : This function used to initialize the motor 	*/
/*									         					*/
/*																*/
/*					Inputs : void				  			*/
/*					Return : void		 					    */
/****************************************************************/
/* Pre_condition  :                                             */
/*     				             							    */
/****************************************************************/

void steper_motor_int(void)
{
	dio_vidConfigChannel(port,pin_A,OUTPUT);
	dio_vidConfigChannel(port,pin_B,OUTPUT);
	dio_vidConfigChannel(port,pin_C,OUTPUT);
	dio_vidConfigChannel(port,pin_D,OUTPUT);
	
	
	
}




/****************************************************************/
/* Description    : This function used to make the motor work	*/
/*									         					*/
/*																*/
/*					Inputs : void				  			*/
/*					Return : void		 					    */
/****************************************************************/
/* Pre_condition  :                                             */
/*     				             							    */
/****************************************************************/

void steper_motor(void)
{
	
 switch(rotaion) 
 {	
	case 0 : 
	 {
		 #if type_of_steps == halfstep
		  		 
	   for(int i=0;i<12;i++)
	   {
		   
		  dio_vidWriteChannel(port,pin_A,STD_HIGH);
		  dio_vidWriteChannel(port,pin_D,STD_HIGH);
		   _delay_ms(speed);
		   dio_vidWriteChannel(port,pin_A,STD_LOW);
	      dio_vidWriteChannel(port,pin_D,STD_HIGH);
		   _delay_ms(speed);
		  dio_vidWriteChannel(port,pin_C,STD_HIGH);
		  dio_vidWriteChannel(port,pin_D,STD_HIGH);
		   _delay_ms(speed);
		   dio_vidWriteChannel(port,pin_D,STD_LOW);
		  dio_vidWriteChannel(port,pin_C,STD_HIGH);
		   _delay_ms(speed);
		  dio_vidWriteChannel(port,pin_B,STD_HIGH);
		  dio_vidWriteChannel(port,pin_C,STD_HIGH);
		   _delay_ms(speed);
		   dio_vidWriteChannel(port,pin_C,STD_LOW);
		  dio_vidWriteChannel(port,pin_B,STD_HIGH);
		   _delay_ms(speed);
		  dio_vidWriteChannel(port,pin_A,STD_HIGH);
		  dio_vidWriteChannel(port,pin_B,STD_HIGH);
		   _delay_ms(speed);
		   dio_vidWriteChannel(port,pin_B,STD_LOW);
		  dio_vidWriteChannel(port,pin_A,STD_HIGH);
		   _delay_ms(speed);
	   }
	   dio_vidWriteChannel(port,pin_A,STD_HIGH);          /* Last step to initial position */
	   dio_vidWriteChannel(port,pin_B,STD_LOW);
	   dio_vidWriteChannel(port,pin_C,STD_LOW);
	   dio_vidWriteChannel(port,pin_D,STD_HIGH);		
	   _delay_ms(speed);
	   _delay_ms(1000);
	
	#elif type_of_steps == fullstep
	
         for(int i=0;i<12;i++)
         {
			 dio_vidWriteChannel(port,pin_A,STD_LOW);
			 dio_vidWriteChannel(port,pin_B,STD_LOW);
			 dio_vidWriteChannel(port,pin_C,STD_HIGH);
			 dio_vidWriteChannel(port,pin_D,STD_HIGH);
			 _delay_ms(speed);
			 dio_vidWriteChannel(port,pin_D,STD_LOW);
			 dio_vidWriteChannel(port,pin_B,STD_HIGH);
			 dio_vidWriteChannel(port,pin_C,STD_HIGH);
			 _delay_ms(speed);
			 dio_vidWriteChannel(port,pin_C,STD_LOW);
			 dio_vidWriteChannel(port,pin_A,STD_HIGH);
			 dio_vidWriteChannel(port,pin_B,STD_HIGH);
			 _delay_ms(speed);
			 dio_vidWriteChannel(port,pin_B,STD_LOW);
			 dio_vidWriteChannel(port,pin_A,STD_HIGH);
			 dio_vidWriteChannel(port,pin_D,STD_HIGH);
			 _delay_ms(speed);
			 
	        
         }
         dio_vidWriteChannel(port,pin_A,STD_HIGH);          /* Last step to initial position */
         dio_vidWriteChannel(port,pin_B,STD_LOW);
         dio_vidWriteChannel(port,pin_C,STD_LOW);
         dio_vidWriteChannel(port,pin_D,STD_HIGH);
         _delay_ms(speed);
         _delay_ms(1000);
	
	#endif
	
	 }break;
	
case 1:
      	{
         #if type_of_steps == halfstep
         for(int i=0;i<12;i++)
         {
			 dio_vidWriteChannel(port,pin_A,STD_HIGH);
			 dio_vidWriteChannel(port,pin_B,STD_LOW);
			 dio_vidWriteChannel(port,pin_C,STD_LOW);
			 dio_vidWriteChannel(port,pin_D,STD_LOW);
			 _delay_ms(speed);
			 dio_vidWriteChannel(port,pin_A,STD_HIGH);
			 dio_vidWriteChannel(port,pin_B,STD_HIGH);
			 _delay_ms(speed);
			 dio_vidWriteChannel(port,pin_A,STD_LOW);
			 dio_vidWriteChannel(port,pin_B,STD_HIGH);
			 _delay_ms(speed);
			 dio_vidWriteChannel(port,pin_B,STD_HIGH);
			 dio_vidWriteChannel(port,pin_C,STD_HIGH);
			 _delay_ms(speed);
			 dio_vidWriteChannel(port,pin_B,STD_LOW);
			 dio_vidWriteChannel(port,pin_C,STD_HIGH);
			 _delay_ms(speed);
			 dio_vidWriteChannel(port,pin_C,STD_HIGH);
			 dio_vidWriteChannel(port,pin_D,STD_HIGH);
			 _delay_ms(speed);
			 dio_vidWriteChannel(port,pin_C,STD_LOW);
			 dio_vidWriteChannel(port,pin_D,STD_HIGH);
			 _delay_ms(speed);
	         dio_vidWriteChannel(port,pin_A,STD_HIGH);
	         dio_vidWriteChannel(port,pin_D,STD_HIGH);
	         _delay_ms(speed);          
         }
         dio_vidWriteChannel(port,pin_A,STD_HIGH);          /* Last step to initial position */
         dio_vidWriteChannel(port,pin_B,STD_LOW);
         dio_vidWriteChannel(port,pin_C,STD_LOW);
         dio_vidWriteChannel(port,pin_D,STD_HIGH);
         _delay_ms(speed);
         _delay_ms(1000);
         
         #elif type_of_steps == fullstep
         
         for(int i=0;i<12;i++)
         {
			 dio_vidWriteChannel(port,pin_A,STD_HIGH);
			 dio_vidWriteChannel(port,pin_B,STD_LOW);
			 dio_vidWriteChannel(port,pin_C,STD_LOW);
			 dio_vidWriteChannel(port,pin_D,STD_HIGH);
			 _delay_ms(speed);
			 dio_vidWriteChannel(port,pin_D,STD_LOW);
			 dio_vidWriteChannel(port,pin_A,STD_HIGH);
			 dio_vidWriteChannel(port,pin_B,STD_HIGH);
			 _delay_ms(speed);
			 dio_vidWriteChannel(port,pin_A,STD_LOW);
			 dio_vidWriteChannel(port,pin_B,STD_HIGH);
			 dio_vidWriteChannel(port,pin_C,STD_HIGH);
			 _delay_ms(speed);
			 dio_vidWriteChannel(port,pin_B,STD_LOW);
			 dio_vidWriteChannel(port,pin_C,STD_HIGH);
			 dio_vidWriteChannel(port,pin_D,STD_HIGH);
			 _delay_ms(speed);        
         }
         dio_vidWriteChannel(port,pin_A,STD_HIGH);          /* Last step to initial position */
         dio_vidWriteChannel(port,pin_B,STD_LOW);
         dio_vidWriteChannel(port,pin_C,STD_LOW);
         dio_vidWriteChannel(port,pin_D,STD_HIGH);
         _delay_ms(speed);
         _delay_ms(1000);
         
         #endif
		 
           }break;
}
          
	
	
	
}