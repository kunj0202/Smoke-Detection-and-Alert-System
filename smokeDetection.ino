int redLed=2;
int greenLed=4;
int buzzer=7;
int sensor=A0;
int Threshold=300;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(sensor,INPUT);
  digitalWrite(greenLed,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue=analogRead(sensor);
  Serial.println(sensorValue);
  if(sensorValue>Threshold)
  {
    digitalWrite(greenLed,LOW);
    digitalWrite(buzzer,HIGH);
    digitalWrite(redLed,HIGH);
  }
  else
  {
    digitalWrite(greenLed,HIGH);
    digitalWrite(redLed,LOW);
    digitalWrite(buzzer,LOW);
  }
  delay(1000);
}
