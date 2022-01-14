int sensor = 5;		//pin for PIR sensor
int val;			//val we get from the sensor (0 or 1)
int leds = 6;		//two leds connected to same pin
int state = 0;		//kind of a flag

void setup(){
  pinMode(leds,OUTPUT);
  pinMode(sensor,INPUT);
  Serial.begin(9600);
}

void loop(){
  val = digitalRead(sensor);	//reading the value from sensor
  
  /*Here additionally we are trying to detect any movement which happens
  and then further print it in the serial monitor.*/
  
  if(val==HIGH){				
    digitalWrite(leds,HIGH);
    delay(500);
    if(state==0){
      Serial.println("Alert !! Movement");
      state=1;
    }
    
  }else{
    digitalWrite(leds,LOW);
    delay(500);
    if(state==1){
      Serial.println("Everything is Normal");
      state=0;
    }
  }
}