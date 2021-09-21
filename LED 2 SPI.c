#include "stm8l15x.h"
#include "stm8l15x_spi.h"
#define Decode_Mode 9
#define Intensity 10
#define Scan_Limit 11
#define Shutdown 12
#define Display_Test 15

void LCD_Send_Data( uint8_t address, uint8_t data);

int main( void ){
  CLK_DeInit();
  
  GPIO_Init(GPIOE,GPIO_Pin_1, GPIO_Mode_Out_PP_High_Fast);
  GPIO_Init(GPIOD, GPIO_Pin_2|GPIO_Pin_0|GPIO_Pin_4|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_1|GPIO_Pin_3|GPIO_Pin_5, GPIO_Mode_Out_PP_High_Fast);
/*Настройка для SPI выводов.*/

GPIO_Init(GPIOC, GPIO_PIN_4, GPIO_Mode_In_FL_No_IT);
GPIO_Init(GPIOC, GPIO_PIN_5, GPIO_Mode_In_FL_No_IT);
GPIO_Init(GPIOC, GPIO_PIN_6, GPIO_Mode_Out_PP_High_Fast);
  
  
/*Настройка самого SPI для передачи данных.*/ 

SPI_Init(SPI1,SPI_FirstBit_LSB,  SPI_BaudRatePrescaler_2, SPI_Mode_Slave, SPI_CPOL_Low, SPI_CPHA_1Edge, SPI_Direction_2Lines_FullDuplex, SPI_NSS_Soft, 7);

 SPI_Cmd(ENABLE);
 

 LCD_Send_Data( Shutdown, 1);
 LCD_Send_Data( Display_Test, 0);
 LCD_Send_Data( Decode_Mode, 255);
 LCD_Send_Data( Intensity, 9);
 LCD_Send_Data( Scan_Limit, 7);
 LCD_Send_Data( Scan_Limit, 7);  
  
  while(1){

 for( uint16_t i=1; i<9; i++){LCD_Send_Data( i, i-1);}
 for( uint32_t e=0; e<100000; e++);

  for( uint16_t i=8; i>0; i--){LCD_Send_Data( i, 8-i);}
  for( uint32_t e=0; e<100000; e++);

 for( uint16_t i=1; i<9; i++){LCD_Send_Data( i, i-1|16);}
 for( uint32_t e=0; e<100000; e++);
 }
  
  return 0;
}

void LCD_Send_Data( uint8_t address, uint8_t data){
  GPIO_WriteLow( GPIOC, GPIO_PIN_1); 
  GPIO_WriteLow(GPIOD, GPIO_Pin_2|GPIO_Pin_0|GPIO_Pin_4|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_1|GPIO_Pin_3|GPIO_Pin_5);
      SPI_SendData(address);
      while(!SPI_GetFlagStatus(SPI_FLAG_TXE));
      SPI_SendData(data);
      while(SPI_GetFlagStatus(SPI_FLAG_BSY));
      GPIO_WriteHigh(GPIOE,GPIO_Pin_1);
      GPIO_WriteHigh(GPIOD, GPIO_Pin_2|GPIO_Pin_0|GPIO_Pin_4|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_1|GPIO_Pin_3|GPIO_Pin_5);
  
  }

#ifdef USE_FULL_ASSERT
void assert_failed(uint8_t* file, uint32_t line)
{
while (1){}
}
#endif