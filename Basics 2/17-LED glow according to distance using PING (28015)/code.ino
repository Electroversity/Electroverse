int sensorPin = 12;
float inch;

void setup()
{
  Serial.begin (9600);
}

void loop()
{
  pinMode(sensorPin, OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  long duration;
  float distance;
  digitalWrite(sensorPin, LOW);
  delayMicroseconds(2);
  digitalWrite(sensorPin, HIGH);
  delayMicroseconds(20);
  digitalWrite(sensorPin, LOW);
  pinMode(sensorPin, INPUT);
  duration = pulseIn(sensorPin, HIGH);
  distance = (duration * 0.03444)/2;
  inch = (distance/2.54);
  
  if (distance >=335 || distance <= 3)
  {
    Serial.print("Out of range");
    delay(1000);
    Serial.print("\n");
  }
  else
  {
    Serial.print(distance);
    Serial.print(" cm, ");
    Serial.print(inch);
    Serial.println(" inch");
    delay(1000);
  }
  
  if (distance<100 && distance>=3)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
  }
  else if (distance>100 && distance<=200)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
  }
  else if (distance>200 && distance<=335)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
  }
  else
  {
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
  }
}