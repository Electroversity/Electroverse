<h1>RGB Led</h1>

<div>
    <img width=500 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%201/06-RGB%20Led/RGB%20Led.png">
    <p>An RGB led is a combination of 3 led's i.e., Red, Green and Blue. These three colors can make any color. By varying supplied voltages to RGB led's different colors can be formed.<br><br>
      An RGB Led has 4 pin interface. There is a common pins for all the three Led's. An RGB led can be of two types:
      <ol>
        <li>Common Anode: Anode[+] pin is common</li>
        <li>Common Anode: Cathode[-/GND] pin is common</li>
      </ol>
  Have Fun !</p>
    
  <h3>Components Required</h3>
  <ol>
    <li>1x RGB LED</li>
    <li>3x Resistor 1k</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE
```C++

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


```
