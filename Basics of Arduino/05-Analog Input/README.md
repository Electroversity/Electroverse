<h1>Analog Input</h1>

<div>
    <img width=450 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%20of%20Arduino/05-Analog%20Input/Analog%20Input.png">
    <p>To read an analog signal through an Arduino, Analog to Digital Conversion or ADC is required. The arduino has 10bit ADC which means it scales an analog signal in a range of 0-1023.<br><br>
      An analog input signal is taken through the Analog input pins A0-A5 of the arduino. In this example an analog input is taken and it is displayed on the LED where you can observe by the delay in glowing the LED.<br><br>
  Have Fun !</p>
</div>
<br><br><br><br>
  
## CODE
```C++



int sensorPin = A2;    // select the input pin for the potentiometer
int ledPin = 3;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(ledPin, LOW);
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}


```
