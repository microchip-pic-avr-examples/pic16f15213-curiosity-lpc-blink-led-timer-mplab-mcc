/**
  Generated Pins File

  Company:
    Microchip Technology Inc.

  File Name:
    pins.c

  Summary:
    This is generated driver implementation for pins. 

  Description:
    This file provides implementations for pin APIs for all pins selected in the GUI.

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

#include "../pins.h"


void PIN_MANAGER_Initialize(void)
{
   /**
    LATx registers
    */
    LATA = 0x0;

    /**
    TRISx registers
    */
    TRISA = 0x2F;

    /**
    ANSELx registers
    */
    ANSELA = 0x27;

    /**
    WPUx registers
    */
    WPUA = 0x0;
  

    /**
    APFCONx registers
    */

    /**
    ODx registers
    */
   
    ODCONA = 0x0;
    /**
    SLRCONx registers
    */
    SLRCONA = 0x37;
    /**
    INLVLx registers
    */
    INLVLA = 0x3F;

    /**
    PPS registers
    */

   /**
    IOCx registers 
    */
    IOCAP = 0x0;
    IOCAN = 0x0;
    IOCAF = 0x0;


}
  
void PIN_MANAGER_IOC(void)
{
}

/**
 End of File
*/