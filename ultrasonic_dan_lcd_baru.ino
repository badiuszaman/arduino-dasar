// AT-MO PRODUCTION
#include <LiquidCrystal.h>

#define echoPin 8             //inisialisai echo pin pada port 8
#define initPin 9             // inisialisasi triger pin pada port 9
unsigned long pulseTime = 0;  // variabel untuk membaca pulsa

// inisialisai LCD
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() {
 //Setup LCD
 lcd.begin(16, 2);

 // setting output pada pin initPin
 pinMode(initPin, OUTPUT);
 //setting input untuk pin Echo
 pinMode(echoPin, INPUT);
}

void loop() {
 digitalWrite(initPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(initPin, LOW);

 pulseTime = pulseIn(echoPin, HIGH);

 lcd.setCursor(0,0);
 lcd.print("Jarak = ");
 lcd.print(pulseTime / 58, DEC);
 lcd.print(" cm");
 lcd.setCursor(0,1);
 lcd.print("AT-MO PRODUCTION");

 delay(100);
 lcd.clear();
}
