/****************************************************************/
/*   Author      :    Mohamed Gamal 		         		    */
/*	 Date 		 :     25 January 2023  						*/
/*	 Version 	 :    1.0V 					        		 	*/
/*	 Description :  Configure Sense Mode [steper_motor_config.h]*/
/****************************************************************/



/****************************************************************/
/* Description   : Guard to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/


#ifndef STEPER_MOTOR_CONFG_H_
#define STEPER_MOTOR_CONFG_H_
/****************************************************************/
/** !comment : Please Enter the port					     	*/
/** 		   ADJUSTMENT can be : 								*/
/*					    						DIO_PORTA       */
/*							    				DIO_PORTB     	*/
/*							    				DIO_PORTC      	*/
/*							    			    DIO_PORTD    	*/
/****************************************************************/

#define port              DIO_PORTD

/****************************************************************/
/** !comment : Please Enter the type of steps					*/
/** 		   ADJUSTMENT can be : 								*/
/*					    						fullstep        */
/*							    				halfstep     	*/
/****************************************************************/
#define type_of_steps     fullstep

/****************************************************************/
/** !comment : Please Enter the type of rotaion					*/
/** 		   ADJUSTMENT can be : 								*/
/*					    						clockwise       */
/*							    				anticlockwise  	*/
/****************************************************************/
#define rotaion           clockwise

/****************************************************************/
/** !comment : Please Enter the 			speed        		*/
/** 		   ADJUSTMENT can be : 								*/
/*					    						                */
/****************************************************************/
#define speed              100





#endif /* STEPER_MOTOR_CONFG_H_ */