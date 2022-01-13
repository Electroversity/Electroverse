int trigPin = 12;
int echoPin = 11;
float inch;

void setup()
{
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop()
{
  long duration;
  float distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(20);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.03444)/2;
  inch = (distance/2.54);
 
  if(distance>=3 && distance<=335)
  {
  	if (distance<100 && distance>=3)
  	{
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(5,HIGH);
      delay(500);
 	}
    if (distance>100 && distance<=200)
  	{
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(5,LOW);
      delay(500);
  	}
  	
    if (distance>200 && distance<=335)
  	{
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
  	}
    Serial.print(distance);
    Serial.print(" cm, ");
    Serial.print(inch);
    Serial.println(" inch");
    delay(1000);
  }
  
  else
  {
    digitalWrite(2,LOW);
  	digitalWrite(3,LOW);
  	digitalWrite(4,LOW);
    Serial.println("Out of range");
    delay(1000);
  }
}