
/**
  ******************************************************************************
  * @file    Project/STM8L15x_StdPeriph_Template/main.c
  * @author  MCD Application Team
  * @version V1.6.1
  * @date    30-September-2014
  * @brief   Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2014 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm8l15x.h"
#include "Cathode lib_table.h" 

int main( void )
{
CLK_LSICmd(ENABLE);
CLK_SYSCLKSourceSwitchCmd(ENABLE);
CLK_SYSCLKDivConfig(CLK_SYSCLKDiv_1);
CLK_SYSCLKSourceConfig(CLK_SYSCLKSource_LSI);
CLK_HSICmd(DISABLE);

CLK_PeripheralClockConfig(CLK_Peripheral_RTC,ENABLE);
CLK_RTCClockConfig(CLK_RTCCLKSource_LSI, CLK_RTCCLKDiv_16);
CLK_PeripheralClockConfig(CLK_Peripheral_LCD,ENABLE);

// F lcd  = 32Hz
LCD_Init(LCD_Prescaler_1,LCD_Divider_16,LCD_Duty_Static,LCD_Bias_1_2,LCD_VoltageSource_Internal);
LCD_PortMaskConfig(LCD_PortMaskRegister_0, 0xFF);
LCD_PortMaskConfig(LCD_PortMaskRegister_1, 0xFF);
LCD_PortMaskConfig(LCD_PortMaskRegister_2, 0xFF);
LCD_PortMaskConfig(LCD_PortMaskRegister_3, 0xFF);

LCD_ContrastConfig(LCD_Contrast_Level_7);
LCD_DeadTimeConfig(LCD_DeadTime_0);
LCD_PulseOnDurationConfig(LCD_PulseOnDuration_7);
LCD_Cmd(ENABLE);


/** @addtogroup STM8L15x_StdPeriph_Template
  * @{
     */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program.
  * @param  None
  * @retval None
  */





#ifdef  USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *   where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */

#endif

/**
  * @}
  */

}