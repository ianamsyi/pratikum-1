 void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

if (digitalRead(A0)== LOW )
{
 PORTB=0b0001;
  delay(500);
 PORTB=0b0010;
 delay(500);
  PORTB=0b0011;
  delay(500);
  PORTB=0b0100;
  delay(500);
  PORTB=0b0101;
  delay(500);
  PORTB=0b0110;
  delay(500);
  PORTB=0b0111;
  delay(500);
  PORTB=0b1000;
  delay(500);
  PORTB=0b1001;
  delay(500);
  PORTB=0b1010;
  delay(500);
  PORTB=0b1100;
  delay(500);
  PORTB=0b1101;
  delay(500);
  PORTB=0b1110;
  delay(500);
  PORTB=0b1111;
  delay(500);
  
}
if(digitalRead(A1)==HIGH)
{
 PORTB=0b1111;
  delay(500);
  PORTB=0b1110;
  delay(500);
   PORTB=0b1101;
  delay(500);
   PORTB=0b1100;
  delay(500);
    PORTB=0b1010;
  delay(500);
  PORTB=0b1001;
  delay(500);
  PORTB=0b1000;
  delay(500);
  PORTB=0b0111;
  delay(500);
  PORTB=0b0110;
  delay(500);
  PORTB=0b0101;
  delay(500);
  PORTB=0b0100;
  delay(500);
  PORTB=0b0011;
  delay(500);
  PORTB=0b0010;
 delay(500);
 PORTB=0b0001;
 delay(500);
}
else DDRB=0x00;

}
