/*
 * roboter_bluetooth.h
 *
 * Created: 21.10.2017
 *  Author: Patrik Staudenmayer
 */ 


#ifndef ROBOTER_BLUETOOTH_H_
#define ROBOTER_BLUETOOTH_H_

//*************************************************************************************************
//*** PINNING ***
//*************************************************************************************************
/*
*	Bluetooth Module HC 06 was used
*	
*	  1 2 3 4 5
*	  ---------
* 1  |. . . . .|				(1|5)...GND			
* 2  |. . . . .|				(2|5)... VCC		
*     ---   ---
*
*	 <J4>  <J3
*	 ------------					(1|2) ... uC RX (PD2) -> TX Bluetooth module... red cable
*	|. . . . . . |					(1|5) ... uC TX (PD3)-> RX Bluetooth module... brown cable
*	 ------------
*		<--- USB connector
*
**************************************************************************************************
!!!!!!!!!!!!!!!!!!Cable colors are only for one specific uC correct !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**************************************************************************************************/


//*************************************************************************************************
//*** Defines ***
//*************************************************************************************************

#define F_CPU 16000000UL
#define UART_BAUD_RATE 9600UL			//9,600 Bd
#define UART_BAUD_RATE_CALC(UART_BAUD_RATE, F_CPU) ((F_CPU)/((UART_BAUD_RATE)*16L)-1)
#define TRANSMITTED 1



//*************************************************************************************************
//*** Prototype ***
//*************************************************************************************************

void bluetooth_init(void);
unsigned int bprintf(char trans);
unsigned char bscanf(void);									//The seriell interrupt is enabled so mostly the interrupt replaces this function

//*************************************************************************************************
//*** Global Variables ***
//*************************************************************************************************



#endif /* ROBOTER_BLUETOOTH_H_ */