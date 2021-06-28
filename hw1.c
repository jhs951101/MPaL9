void BoardTest(){

 STM3210B_LCD_Init();

 while(1){
 LCD_Clear(White);
 LCD_SetTextColor( Red );
 LCD_SetBackColor( Blue );
 LCD_DisplayStringLine( 10, "Microprocessor Test" );
 LCD_SetTextColor( Green );
 LCD_SetBackColor( Black);
 LCD_DisplayStringLine( 100, "Team Number : 02" );
 Delay(1000);
 }
}