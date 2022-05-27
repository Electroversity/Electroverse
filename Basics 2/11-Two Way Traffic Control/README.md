<h1>Two Way Traffic Control</h1>

<div>
    <img width=500 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Basics%202/11-Two%20Way%20Traffic%20Control/traffic%20control.png">
    <p>The following circuit deals with the implementation of a Two Way traffic control scenario wherein we let the passengers walk depending on the colour of light.<br><br>Just to make sure here Blue light indicates the passenger is allowed to walk and the RED led placed next to it indicates that the person isn't allowed or soon it's going to be a GREEN light for the cars.</p>
</div>       
 
 
Have Fun !

<div>
  <h3>Components Required</h3>
  <ol>
    <li>10x LEDs</li>
    <li>10x Resistor of 220 ohms</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE

Looping part of the code where each of the void functions have been made which can be found directly on the .ino file attached

```C++
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

```
