const int led1 = 5;
const int led2 = 4;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop(){
  for(int brightness=1; brightness <=255; brightness++){
  	analogWrite(led1,brightness);
    analogWrite(led2,255-brightness);
    delay(30);
  }
  for(int brightness=255; brightness >0; brightness--){
  	analogWrite(led1,brightness);
    analogWrite(led2,255-brightness);
    delay(30);
  }
}

