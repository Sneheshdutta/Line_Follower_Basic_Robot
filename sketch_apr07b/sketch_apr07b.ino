#define LIR 5   //left ir sensor , blue jumper
#define CIR 4   //center ir sensor , green jumper
#define RIR 3   //right ir sensor , yellow jumper
#define RLED 10 //red led 
#define GLED 13 //green led
#define BLED 11 //blue led
#define LMP 9   //left motor positive , blue jumper
#define LMN 8   //left motor negative 
#define RMP 6   //right motor positive , red jumper
#define RMN 7   //right motor negative
void setup()
{
  pinMode(LIR,INPUT);  //IR Sensors
  pinMode(CIR,INPUT);
  pinMode(RIR,INPUT);
  pinMode(RLED,OUTPUT); //LEDs
  pinMode(GLED,OUTPUT);
  pinMode(BLED,OUTPUT);
  pinMode(LMP,OUTPUT);  //Left Motor
  pinMode(LMN,OUTPUT);
  pinMode(RMP,OUTPUT);  //Right Motor
  pinMode(RMN,OUTPUT);
}
void loop() 
  {
    digitalWrite(GLED, HIGH);
    digitalWrite(LMP,HIGH);
    digitalWrite(LMN,LOW);
    digitalWrite(RMP,HIGH);
    digitalWrite(RMN,LOW);
  }

