/**
  Generated Pins header File

  Company:
    Microchip Technology Inc.

  File Name:
    pins.h

  Summary:
    This is generated driver header for pins. 

  Description:
    This header file provides APIs for all pins selected in the GUI.

  Generation Information:
    Driver Version:  3.0.0

*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA4 aliases
#define LED_TRIS                 TRISAbits.TRISA4
#define LED_LAT                  LATAbits.LATA4
#define LED_PORT                 PORTAbits.RA4
#define LED_WPU                  WPUAbits.WPUA4
#define LED_OD                   ODCONAbits.ODCA4
#define LED_ANS                  ANSELAbits.ANSA4
#define LED_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED_GetValue()           PORTAbits.RA4
#define LED_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LED_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PINS_H
/**
 End of File
*/