/*
 * Mostrando texto e fazendo o scroll no lcd
 */
#include <LiquidCrystal.h>
 
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
 
void setup()
{
  lcd.begin(16, 2);
  }
 
void loop()
{
  
  lcd.clear();
  lcd.setCursor(7, 0);
  lcd.print("Ola");
  lcd.setCursor(7, 1);
  lcd.print("Tudo bem?");
  delay(1000);
  
  
  scroll_left();
  scroll_right();
   
 }
 void scroll_left(){
  for (int posicao = 0; posicao < 7; posicao++){
    lcd.scrollDisplayLeft();
    delay(500);
  }
 
 }
  void scroll_right(){
  for (int posicao = 0; posicao < 7; posicao++){
    lcd.scrollDisplayRight();
    delay(500);
  }
 
 }



