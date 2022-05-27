<h1>Shift Register</h1>

<div>
    <img width=500 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Basics%201/13-Shift%20Register/shift%20register.png">
    <p>A Shift Register is used for serial input and parallet output. The arduino has limitation of Input/output pins, with the help of shift register output pins can be increased. One shift register which we have used here i.e., 74HC595 is controlled through 3 pins of an arduino and it gives 8 output pins. Multiple shift registers can be attached together all of them are controlled through the same 3 pins.<br><br>
    <ul>
    <li>The Latch Pin of a shift register is set to zero before pushing the data</li>
    <li>After pushing, the latch pin is set to HIGH which makes pushing data complete</li>
    <li>Whatever data is pushed is set on shift register's output</li>
    <li>Here in our example, the output can be seen with the glow of all LEDs at the same time</li>
    </ul>
    
  Have Fun !</p>
    
  <h3>Components Required</h3>
  <ol>
    <li>8x LED</li>
    <li>8x Resistor 1k ohm</li>
    <li>1x Shift Register(74HC595)</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE
```C++
const int DataPin = 4;    // DS-Serial Data Input
const int ClockPin = 3;   // SHCP-Shift Register Clock Input
const int LatchPin = 2;   // STCP-Storage Register Clock Input

void setup(){
  pinMode(DataPin, OUTPUT);
  pinMode(ClockPin, OUTPUT);
  pinMode(LatchPin, OUTPUT);  
}

void loop(){
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,LSBFIRST,255);
  digitalWrite(LatchPin,HIGH);
  delay(1000);
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,LSBFIRST,0);
  digitalWrite(LatchPin,HIGH);
  delay(1000);
}
```

<h2>PROTEUS DIAGRAM</h2>

<img align=right src="https://github.com/Electroversity/Electroverse/blob/main/Basics%201/13-Shift%20Register/Proteus-Shift%20Register.png">
<br><br>


<h2>REFERENCES</h2>

<ol>
    <li><a href="https://www.arduino.cc/reference/en/language/functions/advanced-io/shiftout/">ShiftOut</a></li>
    <li><a href="https://www.rs-online.com/designspark/basics-of-74hc595#:~:text=Pin%20%23%2011%20is%20SHCP%20which,which%20is%20Serial%20Data%20input.">Basics of 74HC595</a></li>
    <li><a href="https://lastminuteengineers.com/74hc595-shift-register-arduino-tutorial/">How 74HC595 Shift Register works?</a></li>
</ol>
