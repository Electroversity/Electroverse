int moisture = 0;

void setup()
{
  pinMode(A0, OUTPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(A0, HIGH);
  delay(10);
  moisture = analogRead(A1);
  digitalWrite(A0, LOW);
  Serial.println(moisture);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  if (moisture < 200) 
  {
    digitalWrite(12, HIGH);
  } 
  else 
  {
    if (moisture < 400) 
    {
      digitalWrite(11, HIGH);
    } 
    else 
    {
      if (moisture < 600) 
      {
        digitalWrite(10, HIGH);
      } 
      else 
      {
        if (moisture < 800) 
        {
          digitalWrite(9, HIGH);
        } 
        else 
        {
          digitalWrite(8, HIGH);
        }
      }
    }
  }
  delay(100);
}