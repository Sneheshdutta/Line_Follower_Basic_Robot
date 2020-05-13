const int IN1 = 8;
const int IN2 = 9;
const int IN3 = 7;
const int IN4 = 6;
const int ENA = 10;
const int ENB = 5;
const int LED = 11;
const int RED =1;

void setup() {

  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  pinMode (ENA, OUTPUT);
  pinMode (ENB, OUTPUT);
  pinMode (LED, OUTPUT);
  pinMode (RED, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {

  analogWrite(ENA, 70);
  analogWrite(ENB, 60); 
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  digitalWrite(IN4, LOW);
  digitalWrite(LED, HIGH);
  digitalWrite(RED, HIGH);
  
  // put your main code here, to run repeatedly:

}
