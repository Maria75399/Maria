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
#define COMMON_CATHODE
#define segment_A 11
#define segment_B 7
#define segment_C 4
#define segment_D 2
#define segment_E 1
#define segment_F 10
#define segment_G 5
#define segment_DP 3




#ifdef COMMON_CATHODE
extern const char numbers[10] = {
(1 << segment_F) | (1 << segment_E) | (1 << segment_D) | (1 << segment_C) | (1 << segment_B) | (1 << segment_A),
(1 << segment_C) | (1 << segment_B),
(1 << segment_D) | (1 << segment_E) | (1 << segment_G) | (1 << segment_B) | (1 << segment_A),
/*3*/ (1 << segment_G) | (1 << segment_D) | (1 << segment_C) | (1 << segment_B) | (1 << segment_A),
/*4*/ (1 << segment_G) | (1 << segment_F) | (1 << segment_C) | (1 << segment_B),
/*5*/ (1 << segment_G) | (1 << segment_F) | (1 << segment_D) | (1 << segment_C) | (1 << segment_A),
/*6*/ (1 << segment_G) | (1 << segment_F) | (1 << segment_E) | (1 << segment_D) | (1 << segment_C) | (1 << segment_A),
/*7*/ (1 << segment_C) | (1 << segment_B) | (1 << segment_A),
/*8*/ (1 << segment_G) | (1 << segment_F) | (1 << segment_E) | (1 << segment_D) | (1 << segment_C) | (1 << segment_B) | (1 << segment_A),
/*9*/ (1 << segment_G) | (1 << segment_F) | (1 << segment_D) | (1 << segment_C) | (1 << segment_B) | (1 << segment_A)

#define DecimalPoint (1<<segment_DP)
#define ClearDisplay 0
#else

extern const char numbers[10] = {
/*0*/ ~((1 << segment_F) | (1 << segment_E) | (1 << segment_D) | (1 << segment_C) | (1 << segment_B) | (1 << segment_A)),
/*1*/ ~((1 << segment_C) | (1 << segment_B)),
/*2*/ ~((1 << segment_D) | (1 << segment_E) | (1 << segment_G) | (1 << segment_B) | (1 << segment_A)),
/*3*/ ~((1 << segment_G) | (1 << segment_D) | (1 << segment_C) | (1 << segment_B) | (1 << segment_A)),
/*4*/ ~((1 << segment_G) | (1 << segment_F) | (1 << segment_C) | (1 << segment_B)),
/*5*/ ~((1 << segment_G) | (1 << segment_F) | (1 << segment_D) | (1 << segment_C) | (1 << segment_A)),
/*6*/ ~((1 << segment_G) | (1 << segment_F) | (1 << segment_E) | (1 << segment_D) | (1 << segment_C) | (1 << segment_A)),
/*7*/ ~((1 << segment_C) | (1 << segment_B) | (1 << segment_A)),
/*8*/ ~((1 << segment_G) | (1 << segment_F) | (1 << segment_E) | (1 << segment_D) | (1 << segment_C) | (1 << segment_B) | (1 << segment_A)),
/*9*/ ~((1 << segment_G) | (1 << segment_F) | (1 << segment_D) | (1 << segment_C) | (1 << segment_B) | (1 << segment_A))

#define DecimalPoint ~(1<<segment_DP)
#define ClearDisplay 255
#endif
};


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
void main(void)
{
  /* Infinite loop */
  while (1)
  {
    
  }
}

#ifdef  USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *   where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
void SPI_Config (){
  SPI_DeInit();
  SPI_Init (
    SPI_FIRSTBIT_MSB, SPI_BAUDRATEPRESCALER_128, SPI_MODE_MASTER,
    SPI_CLOCKPOLARITY_LOW, SPI_CLOCKPHASE_1EDGE,
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
