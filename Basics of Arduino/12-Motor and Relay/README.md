<h1>DC Motor and Relay</h1>

<div>
    <img width=600 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%20of%20Arduino/12-Motor%20and%20Relay/motor%20and%20relay.png">
    <p>A relay is an electro mechanical switch. It is used for switching high current devices that cannot be switched by transistor. Relay consists of one electromagnetic coil and three terminals for switching. 
        <ol>
            <li>One among these terminals is a common terminal that floats between other two terminals.</li>
            <li>These two terminals are normally Close(NC) and Normally open(NO) terminals.</li>
        </ol> <br>
      In normal condition(power is not supplied to relay's coil) the common terminal remains connected to the NC terminal. When a power is supplied to the relay's magnetic coil, it generates magnetic force. This force detaches common terminal from the NC terminal and connects the common terminal to NO terminal. The relay returns to it's original condition as soon as voltage supply stops.<br><br>
The transistor takes signals from an Arduino and performs switching off the relay's coil. This switching of the transistor makes switching of the relay's common terminal between NC and NO terminals. Finally the motor is controlled which is connected to the NO and the common terminal of the relay.
      
  Have Fun !</p>
    
  <h3>Components Required</h3>
  <ol>
    <li>1x DC Motor</li>
    <li>1x Diode</li>
    <li>1x DPDT</li>
    <li>1x LED</li>
    <li>1x Transistor NPN</li>
    <li>2x Resistor 1k</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE
```C++

const int motor = 2;

void setup(){
  pinMode(motor,OUTPUT);
}

void loop(){
  digitalWrite(motor,HIGH);
  delay(1000);
  digitalWrite(motor,LOW);
  delay(1000);
}


```
