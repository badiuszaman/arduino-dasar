#define cepat 50
#define agakcepat 150
#define agaklambat 300
#define lambat 500
int jeda;
void setup() {
  // put your setup code here, to run once:
DDRD = DDRD | B11111100;
}

void loop() {
jeda = lambat;
  // put your main code here, to run repeatedly:
PORTD = B10001000;
delay(jeda);
PORTD = B01000100;
delay(jeda);
PORTD = B00100000;
delay(jeda);
PORTD = B00010000;
delay(jeda);


}
