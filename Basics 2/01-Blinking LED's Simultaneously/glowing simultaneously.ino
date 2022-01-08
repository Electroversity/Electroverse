const int led1 = 3;
const int led2 = 5;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop(){
  glow1();
  delay(1000);
  glow2();
  delay(1000);
}

void glow1(){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
}

void glow2(){
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
}