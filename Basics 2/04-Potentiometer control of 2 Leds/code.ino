const int analog_pot = A1;
const int LED1 = 6;
const int LED2 = 7;
int inputVal = 0;

void setup() {
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
}

void loop() {
  inputVal = analogRead(analog_pot);
  analogWrite(LED1, inputVal/4);
  analogWrite(LED2, (1023-inputVal)/4);		//to display the opposite effect
  
}