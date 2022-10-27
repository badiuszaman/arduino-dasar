#include 
LiquidCrystal lcd(7,6,5,4,3,2);
void setup() 
{
  lcd.begin(16, 2);
}
 
void loop() {
  int i;  
  lcd.setCursor(0, 0);
  lcd.print("www.warriornux.com");
  for (i = 0 ; i < 16; i++) 
  {
    lcd.scrollDisplayRight(); 
    delay(250);
  } 
}