const int LED = 1;

void setup(){
  pinMode(LED, OUTPUT);
}

void loop(){
  digitalWrite(LED, HIGH);
  delay(1000);
  
  digitalWrite(LED, LOW);
  delay(1000);
}