#define bjtpin1 3
#define bjtpin2 5

float ldrvalue;
void setup()
{
  pinMode(bjtpin1,OUTPUT);
  pinMode(bjtpin2,OUTPUT);
  pinMode(A5,INPUT);
  Serial.begin(9600);
}
void loop()
{
  ldrvalue = analogRead(A5);
  if (ldrvalue>200)
  {
    digitalWrite(bjtpin1, LOW);
    digitalWrite(bjtpin2, LOW);
  }
  else if (ldrvalue >100 && ldrvalue<200)
  {
    digitalWrite(bjtpin1, HIGH);
    digitalWrite(bjtpin2, LOW);
  }
  else
  {
    digitalWrite(bjtpin1, HIGH);
    digitalWrite(bjtpin2, HIGH);
  }
  delay(500);
  Serial.println(ldrvalue);
}
