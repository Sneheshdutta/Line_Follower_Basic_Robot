/* Project Arduino Line Follower Autonomous Robot
 * Made by Sinjon Nath & Snehesh Dutta
 * Techstorm 2.18 , Ro-Nevigation
 * Functions of our robot:
 * 1.The line will be black on a white background.
 * 2.Operating by three ip sensors.
 * 3.The boat has 3 lights for detecting position.
 * 4.Glows led in the checkpoint.
 * 5.It stops at the finishing point.
 * 6.Used motors are of 300rpm,12volt
 */

#define LIR 4   //left ir sensor , blue jumper
#define CIR 3   //center ir sensor , green jumper
#define RIR 2   //right ir sensor , yellow jumper
#define RLED 11 //red led 
#define GLED 1  //green led
#define BLED 12 //blue led
#define LMP 9   //left motor positive , blue jumper
#define LMN 8   //left motor negative 
#define RMP 7   //right motor positive , red jumper
#define RMN 6   //right motor negative
#define ENA 10  //PWM of left motor
#define ENB 5   //PWM of right motor
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
  pinMode(ENA,OUTPUT);  //PWM
  pinMode(ENB,OUTPUT);
}
void loop() 
{if((!digitalRead(LIR))&&(digitalRead(CIR))&&!(digitalRead(RIR)))
{
  digitalWrite(RLED,LOW);
  digitalWrite(GLED, HIGH);
   analogWrite(ENA, 70);
  analogWrite(ENB, 60); 
  digitalWrite(LMN, LOW);
  digitalWrite(LMP, HIGH);
  digitalWrite(RMP, HIGH);
  digitalWrite(RMN, LOW);
}
if((!digitalRead(LIR))&&(digitalRead(CIR))&&!(digitalRead(RIR)))
{
if((digitalRead(LIR))||(digitalRead(CIR))&&!(digitalRead(RIR)))             //LEFT
{
  digitalWrite(RLED,LOW);
   
  analogWrite(ENA, 50);
  analogWrite(ENB, 70); 
  digitalWrite(LMN, HIGH);
  digitalWrite(LMP, LOW);
  digitalWrite(RMP, HIGH);
  digitalWrite(RMN, LOW);
  digitalWrite(GLED, HIGH);
}
if((!digitalRead(LIR))&&(digitalRead(CIR))||(digitalRead(RIR)))          
{
  digitalWrite(RLED,LOW);
   
  analogWrite(ENA, 70);
  analogWrite(ENB, 50); 
  digitalWrite(LMN, LOW);
  digitalWrite(LMP, HIGH);
  digitalWrite(RMP, LOW);
  digitalWrite(RMN, HIGH);
  digitalWrite(GLED, HIGH);
}
if((!digitalRead(LIR))&&(!digitalRead(CIR))&&!(digitalRead(RIR)))      //STOP
{
  digitalWrite(RLED,HIGH);
   
  analogWrite(ENA, 70);
  analogWrite(ENB, 60); 
  digitalWrite(LMN, LOW);
  digitalWrite(LMP, LOW);
  digitalWrite(RMP, LOW);
  digitalWrite(RMN, LOW);
  digitalWrite(GLED, LOW);
}
}

}  
  // put your main code here, to run repeatedly:



