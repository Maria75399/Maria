#include "stm8l15x.h"
#include "Cathode lib_table.h"
#define LED1_Pin GPIO_Pin_2
#define LED2_Pin GPIO_Pin_0
#define LED3_Pin GPIO_Pin_4
#define LED4_Pin GPIO_Pin_6
#define LED5_Pin GPIO_Pin_7
#define LED6_Pin GPIO_Pin_1
#define LED7_Pin GPIO_Pin_3
#define LED8_Pin GPIO_Pin_5

extern const char numbers[10];
unsigned char value=0; 

void delay()
{
volatile unsigned long int i=0;
for(i=0; i<500000; i++);
}

void main()
{
CLK_SYSCLKDivConfig(CLK_SYSCLKDiv_1);
GPIO_Init(GPIOD, GPIO_Pin_2|GPIO_Pin_0|GPIO_Pin_4|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_1|GPIO_Pin_3|GPIO_Pin_5, GPIO_Mode_Out_PP_High_Fast);
TIM1_TimeBaseInit(1000, TIM1_CounterMode_Up, 16000, 0);
TIM1_ITConfig(TIM1_IT_Update, ENABLE);
TIM1_Cmd(ENABLE);


   
while(1)
 {
 GPIOD->ODR  = ClearDisplay; 
  delay(1000);
 }
while(1)
{
  value++;
if (value==10) value=0; 
   GPIOD->ODR = numbers[value];  
   delay(1000);
  

}
}
          


