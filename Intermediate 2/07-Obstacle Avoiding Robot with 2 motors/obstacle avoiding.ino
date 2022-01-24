int trigPin = 13;
int echoPin = 12;
float inch;
int enable_right = 2;
int enable_left = 3;

//LED's are defined here on the basis of robot's motion
int forward_led = 11;		//robot moving forward
int backward_led = 10;		//robot moving backward
int right_led = 9;			//robot moving right
int left_led = 8;			//robot moving left

//-----Initialising variables for Gear Motor----------
#define Right_MotorPin1 7
#define Right_MotorPin2 6
#define Left_MotorPin1 5
#define Left_MotorPin2 4


//----------------------------------------------------

void setup()
{
  Serial.begin(9600);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(forward_led,OUTPUT);
  pinMode(backward_led,OUTPUT);
  pinMode(right_led,OUTPUT);
  pinMode(left_led,OUTPUT);
  
  pinMode(Right_MotorPin1,OUTPUT);
  pinMode(Right_MotorPin2,OUTPUT);
  pinMode(Left_MotorPin1,OUTPUT);
  pinMode(Left_MotorPin2,OUTPUT);
  pinMode(enable_right,INPUT);
  pinMode(enable_left,INPUT);
}

void loop()
{
  //-------Configuration of Ultrasonic Sensor---------
  long duration;
  float Front_dist;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(20);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  Front_dist = (duration * 0.03444)/2;
  //inch = (Front_dist/2.54);
 //---------------------------------------------------
  analogWrite(enable_right, 255);
  analogWrite(enable_left, 255);
  
  if(Front_dist<50){
    digitalWrite(forward_led,HIGH);
    digitalWrite(backward_led,HIGH);	//red led
    stop();
    delay(100);
    digitalWrite(forward_led,LOW);
    backward();
    delay(100);
    digitalWrite(right_led,HIGH);		//blue led
    right();
    delay(100);
    digitalWrite(right_led,LOW);
    digitalWrite(left_led,HIGH);		//orange led
  }else{
    digitalWrite(forward_led,HIGH);		//green led
    digitalWrite(backward_led,LOW);
    digitalWrite(right_led,LOW);
    digitalWrite(left_led,LOW);
    forward();
  }
  
}


void forward(){
  	//-------MOTOR 1 is On--------------
  	digitalWrite(Right_MotorPin1, HIGH);
	digitalWrite(Right_MotorPin2, LOW);
  	//-------MOTOR 2 is On--------------
	digitalWrite(Left_MotorPin1, HIGH);
	digitalWrite(Left_MotorPin2, LOW);
  	delay(1000);
}

void backward(){
  	//-------MOTOR 1 is On----Direction changed----------
  	digitalWrite(Right_MotorPin1, LOW);
	digitalWrite(Right_MotorPin2, HIGH);
  	//-------MOTOR 2 is On----Direction changed----------
	digitalWrite(Left_MotorPin1, LOW);
	digitalWrite(Left_MotorPin2, HIGH);
 	delay(2000);
}

void right(){
  //-------MOTOR 1 is Off--------------
  	digitalWrite(Right_MotorPin1, LOW);
	digitalWrite(Right_MotorPin2, LOW);
  //-------MOTOR 2 is On--------------
	digitalWrite(Left_MotorPin1, HIGH);
	digitalWrite(Left_MotorPin2, LOW);
  	delay(2000);
}

void left(){
  //-------MOTOR 1 is On--------------
  	digitalWrite(Right_MotorPin1, HIGH);
	digitalWrite(Right_MotorPin2, LOW);
  //-------MOTOR 2 is Off--------------
	digitalWrite(Left_MotorPin1, LOW);
	digitalWrite(Left_MotorPin2, LOW);
  	delay(2000);
}

void stop(){
  //-------MOTOR 1 is Off--------------
  	digitalWrite(Right_MotorPin1, LOW);
	digitalWrite(Right_MotorPin2, LOW);
  //-------MOTOR 2 is Off--------------
	digitalWrite(Left_MotorPin1, LOW);
	digitalWrite(Left_MotorPin2, LOW);
}