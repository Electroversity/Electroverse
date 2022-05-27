<h1>Transistor</h1>

<div>
    <img width=450 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Basics%201/11-Transistor/transistor.png">
    <p>A very less current consuming devices like LEDs can be controlled directly through an Arduino. Other devices can be controlled by an Arduino signal using a transistor. In such case a transistor is there between an Arduino and the device.<br><br>
        The transistor takes signals from the Arduino and controls the device as per the signals.<br>
      Here we deal with using an NPN transistor as switch.<br><br>
        

  Have Fun !</p>
    
  <h3>Components Required</h3>
  <ol>
    <li>1x Transistor</li>
    <li>1x LED</li>
    <li>2x Resistor 1k</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>

<b>NPN Configuration</b>

| Collector | Base | Emitter |
| --- | --- | --- |
| Connects with the cathode of LED | Connects to the digital pin with resistor in between | Ground |

  
## CODE
```C++

const int transistor = 8;

void setup()
{
  pinMode (transistor, OUTPUT);
}

void loop()
{
  digitalWrite (transistor, HIGH);
  delay(1000);
  digitalWrite (transistor, LOW);
  delay(1000);
}


```
