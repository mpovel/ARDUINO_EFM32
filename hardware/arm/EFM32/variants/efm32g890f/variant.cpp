/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
  
  2016.9.18 for efm32g222f128/64/32 board, Modified by huawei<huaweiwx@sina.com>
*/

#include "Arduino.h"


#ifdef __cplusplus
extern "C" {
#endif

/*
typedef struct _Pin2PortMapArray
{
  	GPIO_TypeDef GPIOx_Port; 
  	uint8_t      pin;   
    uint32_t  	 adc_channel;
    uint32_t  	 timerNumber;    //Timer1 to Timer4.
    uint32_t     timerChannelLoc;   //Timer channel (1-4).  
} Pin2PortMapArray ;
*/

extern const Pin2PortMapArray g_Pin2PortMapArray[]=
{
#if USE_TIMER0_PWM>0    
    {gpioPortA, GPIO_PIN_0,  NO_ADC,                     TIMER0,0x00  },  /* D00/PA0, TIM0_CC0 #0/1, I2C0_SDA #0*/
    {gpioPortA, GPIO_PIN_1,  NO_ADC,                     TIMER0,0x01  },  /* D01/PA1, TIM0_CC1 #0/1, I2C0_SCL #0,CMU_CLK1 #0*/
    {gpioPortA, GPIO_PIN_2,  NO_ADC,                     TIMER0,0x02  },  /* D02/PA2, TIM0_CC2 #0/1,             CMU_CLK0 #0*/
#else
    {gpioPortA, GPIO_PIN_0,  NO_ADC,                     NO_PWM,NO_PWM},  /* D00/PA0, TIM0_CC0 #0/1, I2C0_SDA #0*/
    {gpioPortA, GPIO_PIN_1,  NO_ADC,                     NO_PWM,NO_PWM},  /* D01/PA1, TIM0_CC1 #0/1, I2C0_SCL #0,CMU_CLK1 #0*/
    {gpioPortA, GPIO_PIN_2,  NO_ADC,                     NO_PWM,NO_PWM},  /* D02/PA2, TIM0_CC2 #0/1,             CMU_CLK0 #0*/	
#endif
    {gpioPortA, GPIO_PIN_3,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortA, GPIO_PIN_4,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortA, GPIO_PIN_5,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortA, GPIO_PIN_6,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortA, GPIO_PIN_7,  NO_ADC,                     NO_PWM,NO_PWM}, 
#if USE_TIMER2_PWM>0    
    {gpioPortA, GPIO_PIN_8,  NO_ADC,                     TIMER2,0x00  }, 
    {gpioPortA, GPIO_PIN_9,  NO_ADC,                     TIMER2,0x01  },  
    {gpioPortA, GPIO_PIN_10, NO_ADC,                     TIMER2,0x01  },  
#else
    {gpioPortA, GPIO_PIN_8,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortA, GPIO_PIN_9,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortA, GPIO_PIN_10, NO_ADC,                     NO_PWM,NO_PWM}, 
#endif
    {gpioPortA, GPIO_PIN_11, NO_ADC,                     NO_PWM,NO_PWM}, 

#if USE_TIMER2_PWM>0    
    {gpioPortA, GPIO_PIN_12,  NO_ADC,                    TIMER2,0x10  }, 
    {gpioPortA, GPIO_PIN_13,  NO_ADC,                    TIMER2,0x11  }, 
    {gpioPortA, GPIO_PIN_14,  NO_ADC,                    TIMER2,0x12  }, 
#else
    {gpioPortA, GPIO_PIN_12,  NO_ADC,                    NO_PWM,NO_PWM},  /* D03/PA8, TIM2_CC0 #0*/
    {gpioPortA, GPIO_PIN_13,  NO_ADC,                    NO_PWM,NO_PWM},  /* D04/PA9, TIM2_CC1 #0*/
    {gpioPortA, GPIO_PIN_14,  NO_ADC,                    NO_PWM,NO_PWM},  /* D05/PA10,TIM2_CC2 #0*/ 
#endif	
    {gpioPortA, GPIO_PIN_15, NO_ADC,                     NO_PWM,NO_PWM},  /* D05/PA10,TIM2_CC2 #0*/ 

#if USE_TIMER1_PWM>0 
    {gpioPortB, GPIO_PIN_0,  NO_ADC,                     TIMER1,0x20}, 
    {gpioPortB, GPIO_PIN_1,  NO_ADC,                     TIMER1,0x21}, 
    {gpioPortB, GPIO_PIN_2,  NO_ADC,                     TIMER1,0x22}, 
#else
    {gpioPortB, GPIO_PIN_0,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortB, GPIO_PIN_1,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortB, GPIO_PIN_2,  NO_ADC,                     NO_PWM,NO_PWM}, 
#endif
    {gpioPortB, GPIO_PIN_3,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortB, GPIO_PIN_4,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortB, GPIO_PIN_5,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortB, GPIO_PIN_6,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortB, GPIO_PIN_7,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortB, GPIO_PIN_8,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortB, GPIO_PIN_11, NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortB, GPIO_PIN_12, NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortB, GPIO_PIN_13, NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortB, GPIO_PIN_14, NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortB, GPIO_PIN_15, NO_ADC,                     NO_PWM,NO_PWM}, 
    
    {gpioPortC, GPIO_PIN_0,   NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortC, GPIO_PIN_1,   NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortC, GPIO_PIN_2,   NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortC, GPIO_PIN_3,   NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortC, GPIO_PIN_4,   NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortC, GPIO_PIN_5,   NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortC, GPIO_PIN_6,   NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortC, GPIO_PIN_7,   NO_ADC,                     NO_PWM,NO_PWM}, 
#if USE_TIMER2_PWM>0     
    {gpioPortC, GPIO_PIN_8,   NO_ADC,                     TIMER2,0x20},  
    {gpioPortC, GPIO_PIN_9,   NO_ADC,                     TIMER2,0x21},  
    {gpioPortC, GPIO_PIN_10,  NO_ADC,                     TIMER2,0x22},  
#else
    {gpioPortC, GPIO_PIN_8,   NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortC, GPIO_PIN_9,   NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortC, GPIO_PIN_10,  NO_ADC,                     NO_PWM,NO_PWM},  
#endif
    {gpioPortC, GPIO_PIN_11,  NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortC, GPIO_PIN_12,  NO_ADC,                     NO_PWM,NO_PWM},  
#if USE_TIMER1_PWM>0 
    {gpioPortC, GPIO_PIN_13,  NO_ADC,                     TIMER1,0x00},  
    {gpioPortC, GPIO_PIN_14,  NO_ADC,                     TIMER1,0x01},  
    {gpioPortC, GPIO_PIN_15,  NO_ADC,                     TIMER1,0x02},  
#else
    {gpioPortC, GPIO_PIN_13,  NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortC, GPIO_PIN_14,  NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortC, GPIO_PIN_15,  NO_ADC,                     NO_PWM,NO_PWM},  
#endif

    {gpioPortD, GPIO_PIN_0, _ADC_SINGLECTRL_INPUTSEL_CH0,NO_PWM,NO_PWM}, 
    {gpioPortD, GPIO_PIN_1, _ADC_SINGLECTRL_INPUTSEL_CH1,NO_PWM,NO_PWM}, 
#if USE_TIMER0_PWM>0    
    {gpioPortD, GPIO_PIN_2, _ADC_SINGLECTRL_INPUTSEL_CH2,TIMER0,0x31}, //TIM0_CC1 #3
    {gpioPortD, GPIO_PIN_3, _ADC_SINGLECTRL_INPUTSEL_CH3,TIMER0,0x32}, //TIM0_CC2  #3
#else
    {gpioPortD, GPIO_PIN_2, _ADC_SINGLECTRL_INPUTSEL_CH2,NO_PWM,NO_PWM}, 
    {gpioPortD, GPIO_PIN_3, _ADC_SINGLECTRL_INPUTSEL_CH3,NO_PWM,NO_PWM}, 
#endif
    {gpioPortD, GPIO_PIN_4, _ADC_SINGLECTRL_INPUTSEL_CH4,NO_PWM,NO_PWM}, 
    {gpioPortD, GPIO_PIN_5, _ADC_SINGLECTRL_INPUTSEL_CH5,NO_PWM,NO_PWM}, 
    {gpioPortD, GPIO_PIN_6, _ADC_SINGLECTRL_INPUTSEL_CH6,NO_PWM,NO_PWM}, 
    {gpioPortD, GPIO_PIN_7, _ADC_SINGLECTRL_INPUTSEL_CH7,NO_PWM,NO_PWM}, 
    {gpioPortD, GPIO_PIN_8,  NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortD, GPIO_PIN_9,  NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortD, GPIO_PIN_10, NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortD, GPIO_PIN_11, NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortD, GPIO_PIN_12, NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortD, GPIO_PIN_13, NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortD, GPIO_PIN_14, NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortD, GPIO_PIN_15, NO_ADC,                     NO_PWM,NO_PWM},  

    {gpioPortE, GPIO_PIN_0,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortE, GPIO_PIN_1,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortE, GPIO_PIN_2,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortE, GPIO_PIN_3,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortE, GPIO_PIN_4,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortE, GPIO_PIN_5,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortE, GPIO_PIN_6,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortE, GPIO_PIN_7,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortE, GPIO_PIN_8,  NO_ADC,                     NO_PWM,NO_PWM}, 
    {gpioPortE, GPIO_PIN_9,  NO_ADC,                     NO_PWM,NO_PWM}, 
#if USE_TIMER1_PWM>0    
    {gpioPortE, GPIO_PIN_10, NO_ADC,                     TIMER1,0x10},  /* D27/PE10,TIM1_CC0 #1 US0_TX  #0 BOOT_TX*/
    {gpioPortE, GPIO_PIN_11, NO_ADC,                     TIMER1,0x11},  /* D28/PE11,TIM1_CC1 #1 US0_RX  #0 BOOT_RX*/
    {gpioPortE, GPIO_PIN_12, NO_ADC,                     TIMER1,0x12},  /* D29/PE12,TIM1_CC2 #1 US0_CLK #0 BO*/
#else
    {gpioPortE, GPIO_PIN_10, NO_ADC,                     NO_PWM,NO_PWM},  /* D27/PE10,TIM1_CC0 #1 US0_TX  #0 BOOT_TX*/
    {gpioPortE, GPIO_PIN_11, NO_ADC,                     NO_PWM,NO_PWM},  /* D28/PE11,TIM1_CC1 #1 US0_RX  #0 BOOT_RX*/
    {gpioPortE, GPIO_PIN_12, NO_ADC,                     NO_PWM,NO_PWM},  /* D29/PE12,TIM1_CC2 #1 US0_CLK #0 BO*/
#endif
    {gpioPortE, GPIO_PIN_13, NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortE, GPIO_PIN_14, NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortE, GPIO_PIN_15, NO_ADC,                     NO_PWM,NO_PWM},  

    {gpioPortF, GPIO_PIN_0,  NO_ADC,                     NO_PWM,NO_PWM},  /* D31/PF0,LETIM0_OUT0 #2 DBG_SWCLK #0/1*/
    {gpioPortF, GPIO_PIN_1,  NO_ADC,                     NO_PWM,NO_PWM},  /* D32/PF1,LETIM0_OUT1 #2 DBG_SWDIO #0/1*/
    {gpioPortF, GPIO_PIN_2,  NO_ADC,                     NO_PWM,NO_PWM},  /* D33/PF2,ACMP1_O #0     DBG_SWO #0*/
    {gpioPortF, GPIO_PIN_3,  NO_ADC,                     NO_PWM,NO_PWM},  /* D34/PF3,TIM0_CDTI0  #2*/
    {gpioPortF, GPIO_PIN_4,  NO_ADC,                     NO_PWM,NO_PWM},  /* D35/PF4,TIM0_CDTI1  #2*/
    {gpioPortF, GPIO_PIN_5,  NO_ADC,                     NO_PWM,NO_PWM},  /* D36/PF5,TIM0_CDTI2  #2*/
#if USE_TIMER0_PWM>0    
    {gpioPortF, GPIO_PIN_6,  NO_ADC,                     TIMER0,0x20},  /* D36/PF5,TIM0_CDTI2  #2*/
    {gpioPortF, GPIO_PIN_7,  NO_ADC,                     TIMER0,0x21},  
    {gpioPortF, GPIO_PIN_8,  NO_ADC,                     TIMER0,0x22},  
#else
    {gpioPortF, GPIO_PIN_6,  NO_ADC,                     NO_PWM,NO_PWM},  /* D36/PF5,TIM0_CDTI2  #2*/
    {gpioPortF, GPIO_PIN_7,  NO_ADC,                     NO_PWM,NO_PWM},  
    {gpioPortF, GPIO_PIN_8,  NO_ADC,                     NO_PWM,NO_PWM},  
#endif
    {gpioPortF, GPIO_PIN_9,  NO_ADC,                     NO_PWM,NO_PWM},  
};

#ifdef __cplusplus
}
#endif



/* Private variables ---------------------------------------------------------*/

