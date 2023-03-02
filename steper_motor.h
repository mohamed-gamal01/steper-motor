/****************************************************************/
/*   Author             :    Mohamed Gamal				        */
/*	 Date 				:     25 January 2023 		    		*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:   public Accessing mechanism prototype*/
/*							and Sense Mode Definition [steper_motor.h] 	*/
/****************************************************************/



/****************************************************************/
/* Description   : Guard to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/

#ifndef STEPER_MOTOR_H_
#define STEPER_MOTOR_H_

/****************************************************************/
/** !comment : Sense Mode Definition					   		*/
/****************************************************************/

#define clockwise 0
#define anticlockwise 1

#define fullstep 2
#define halfstep 3

#define pin_A  DIO_PIN0
#define pin_B  DIO_PIN1
#define pin_C  DIO_PIN2
#define pin_D  DIO_PIN3

/****************************************************************/
/* Description :  This function used to initialize stepper motor */
/*					 Inputs : void 								*/
/*					 return : void		 						*/
/****************************************************************/
void steper_motor_int(void);

/****************************************************************/
/* Description :  This function used to work the stepper motor */
/*					 Inputs : void 								*/
/*					 return : void		 						*/
/****************************************************************/

void steper_motor(void);



#endif /* STEPER_MOTOR_H_ */