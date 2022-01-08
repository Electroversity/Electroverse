const int red_led = 11;
const int green_led = 10;
const int blue_led = 9;

void setup(){
  pinMode(red_led,OUTPUT);
  pinMode(green_led,OUTPUT);
  pinMode(blue_led,OUTPUT);
}

void loop(){
  RGB(255,0,0);		//red
  delay(1000);
  RGB(0,255,0);		//green
  delay(1000);
  RGB(0,0,255);		//blue
  delay(1000);		
}

//Writing the RGB function

void RGB(int redVal,int greenVal,int blueVal){
  analogWrite(red_led,redVal);
  analogWrite(green_led,greenVal);
  analogWrite(blue_led,blueVal);
  
}