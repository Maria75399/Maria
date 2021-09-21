
#include "iostm8l152c6.h"
#include "stm8l15x_lcd.c"
#include "stm8l15x_lcd.h"
#include "Cathode lib_table.h"

void init(void);
main()
{
 init();
  CLK_CKDIVR_bit.CKM=0;
 LCD_Init();
 LCD_Contrast_Level_4;
}
    while(1)
      void init(void) {
 {
   LCD_Write_String("KTO");
  for(i=0; i<200000; i++){asm("nop");};
  
 }; 
}
 
{    
   InitializeLCD();
    ClearLCDScreen(); 
    Cursor(1,4);
    PrintStr("KTO");
};
    
    
    
    
    
    
  


