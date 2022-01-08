const int A = 2;	//Top-Right
const int B = 3;	//Top
const int C = 4;	//Top-Left
const int D = 5;	//Middle
const int E = 6;	//Bottom-Right
const int F = 7;	//Bottom
const int G = 10;	//Bottom-Left
const int DP = 9;

void setup(){
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(DP,OUTPUT);
}

void loop(){
  two();
  delay(1000);
  five();
  delay(1000);
}

void two(){
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,HIGH);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(DP,HIGH);
}

void five(){
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,HIGH);
  digitalWrite(DP,HIGH);
}