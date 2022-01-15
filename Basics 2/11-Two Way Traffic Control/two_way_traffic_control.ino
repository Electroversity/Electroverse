int g1=2;			//green 1
int y1=3;			//yellow 1
int r1=4;			//red 1

int g2=7;			//green 2
int y2=8;			//yellow 2
int r2=9;			//red 2

int go_ped1 = 10;	//blue lane 1
int go_ped2 = 11;	//blue lane 2

int stop_ped1 = 12;	//red placed along with blue 1
int stop_ped2 = 13;	//red placed along with blue 2

void setup() 
{
	pinMode(r1,OUTPUT);
	pinMode(y1,OUTPUT);
	pinMode(g1,OUTPUT);
	pinMode(r2,OUTPUT);
	pinMode(y2,OUTPUT);
	pinMode(g2,OUTPUT);
  	pinMode(go_ped1,OUTPUT);
  	pinMode(go_ped2,OUTPUT);
}
void loop() 
{
// State 1
  
  	Lane1_go_Lane2_stop();
  	digitalWrite(stop_ped2,LOW);
  	digitalWrite(stop_ped1,HIGH);
  	Ped2_go_Ped1_stop();
  	
	delay(10000);
  	
  
// State 2
  
    Lane1_hold_Lane2_hold();
  	Ped2_go_Ped1_stop();
    delay(5000);
  
// State 3
  
    Lane1_stop_Lane2_go();
  	digitalWrite(stop_ped1,LOW);
  	digitalWrite(stop_ped2,HIGH);
  	Ped1_go_Ped2_stop();
    delay(10000);
  
// State 4
  
    Lane1_hold_Lane2_hold();
  	Ped1_go_Ped2_stop();
    delay(5000);
}

void Lane1_go_Lane2_stop(){
  	digitalWrite(g1,HIGH);
  	digitalWrite(r2,HIGH);
  	
	digitalWrite(r1,LOW);
	digitalWrite(y1,LOW);
	digitalWrite(y2,LOW);
	digitalWrite(g2,LOW);
}

void Lane1_hold_Lane2_hold(){
  	digitalWrite(y1,HIGH);
    digitalWrite(y2,HIGH);
  	
    digitalWrite(g1,LOW);
    digitalWrite(r1,LOW);
    digitalWrite(g2,LOW);
    digitalWrite(r2,LOW);
}

void Lane1_stop_Lane2_go(){
  	digitalWrite(r1,HIGH);
    digitalWrite(g2,HIGH);
  	
    digitalWrite(y1,LOW);
    digitalWrite(g1,LOW);
    digitalWrite(r2,LOW);
    digitalWrite(y2,LOW);
}

void Ped1_go_Ped2_stop(){
  	digitalWrite(go_ped1,HIGH);
  	digitalWrite(go_ped2,LOW);
}

void Ped2_go_Ped1_stop(){
  	digitalWrite(go_ped1,LOW);
  	digitalWrite(go_ped2,HIGH);
}

