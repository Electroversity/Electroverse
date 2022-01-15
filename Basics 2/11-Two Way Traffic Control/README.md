<h1>Two Way Traffic Control</h1>

<div>
    <img width=450 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%202/04-Potentiometer%20control%20of%202%20Leds/potentiometer%20control.png">
    <p>In this program what we are doing is trying to display an opposite effect on Leds with a potentiometer control over them. Now by opposite effect we mean to display that when potentiometer reaches maximum value one of the led glows while the other dims out completely.<br><br>
        Make sure to remember the pins of Potentiometer i.e.,</p>
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
