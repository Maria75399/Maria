#include "stm8l15x.h"
#define LED1_Pin GPIO_Pin_1
#define LED2_Pin GPIO_Pin_2
#define LED3_Pin GPIO_Pin_3
#define LED4_Pin GPIO_Pin_4
#define LED5_Pin GPIO_Pin_5
#define LED6_Pin GPIO_Pin_6
#define LED7_Pin GPIO_Pin_7
#define LED8_Pin GPIO_Pin_8

void init(void);
main()
{
init();
while (1);
}
void init(void) {
enableInterrupts();
CLK_SYSCLKDivConfig(CLK_SYSCLKDiv_1);
GPIO_Init(GPIOE,GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8, GPIO_Mode_Out_PP_High_Fast);
TIM1_TimeBaseInit(1000, TIM1_CounterMode_Up, 16000, 0);
TIM1_ITConfig(TIM1_IT_Update, ENABLE);
TIM1_Cmd(ENABLE);
}

LED1_RCC_FUNC
