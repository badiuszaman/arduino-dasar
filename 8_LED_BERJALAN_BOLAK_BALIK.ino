int ledpin1= 2;
int ledpin2= 3;
int ledpin3= 4;
int ledpin4= 5;
int ledpin5= 6;
int ledpin6= 7;
int ledpin7= 8;
int ledpin8= 9;

void setup() {
  // put your setup code here, to run once:
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  digitalWrite(1,HIGH);
  delay(100);
  digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(5,HIGH);
  delay(100);
  digitalWrite(6,HIGH);
  delay(100);
  digitalWrite(7,HIGH);
  delay(100);
  digitalWrite(8,HIGH);
  delay(100);
  
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(500);

  digitalWrite(1,HIGH);
  delay(100);
  digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(5,HIGH);
  delay(100);
  digitalWrite(6,HIGH);
  delay(100);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(500);

  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(100);
  
  digitalWrite(8,HIGH);
  delay(100);
  digitalWrite(7,HIGH);
  delay(100);
  digitalWrite(6,HIGH);
  delay(100);
  digitalWrite(5,HIGH);
  delay(100);
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(1,HIGH);
  delay(500);
}
