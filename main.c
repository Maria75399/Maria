
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
extern const char numbers[10];







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

void pause(uint32_t p);
void main( void ){

GPIO_Init(GPIOE,GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5, GPIO_Mode_Out_PP_High_Fast);
GPIO_Init(GPIOD,GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7, GPIO_Mode_Out_PP_High_Fast);
//SPI.
GPIO_Init(GPIOC, GPIO_Pin_4, GPIO_Mode_Out_PP_High_Fast);
GPIO_Init(GPIOC, GPIO_Pin_5, GPIO_Mode_Out_PP_High_Fast);
GPIO_Init(GPIOC, GPIO_Pin_6, GPIO_Mode_In_FL_No_IT);
//slave.
SPI_Init(SPI1,SPI_FirstBit_LSB,  SPI_BaudRatePrescaler_2, SPI_Mode_Slave, SPI_CPOL_High, SPI_CPHA_1Edge, SPI_Direction_2Lines_FullDuplex, SPI_NSS_Soft,7);
//SPI.
SPI_Cmd(SPI1, ENABLE);
while(1){

if(GPIO_ReadInputPin(GPIOE, GPIO_Pin_7)){ GPIO_WriteLow( GPIOD, GPIO_Pin_0); SPI_SendData(111);}

if(SPI_GetFlagStatus(SPI_FLAG_RXNE)){
  
if(SPI_ReceiveData()==111){ pause( 100000);GPIO_WriteReverse( GPIOD, GPIO_Pin_0);}
}
}
}
void pause( uint32_t p){
for( uint32_t i=0; i<p; i++){ }
}
#ifdef USE_FULL_ASSERT
void assert_failed(uint8_t* file, uint32_t line)
{
while (1){ }
}
#endif

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

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
