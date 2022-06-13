<h1>Interfacing with Moisture Sensor</h1>

<div>
    <img width=650 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Basics%202/20-Moisture%20Sensor/moisture%20working.gif">
    <p>Here we deal with interfacing a Moisture Sensor with an arduino where we have used 5 LEDs of different colours to determine the level of water content when the sensor is placed in the soil or wherever needed.<br><br>
  Have Fun !</p>
    
  <h3>Components Required</h3>
  <ol>
    <li>5x LEDs</li>
    <li>1x Moisture sensor</li>
    <li>1x Resistor of 220 ohms</li>
    <li>Breadboard mini</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE

Important part of the code i.e., the main Logic
```C++
 if (moisture < 200) 
  {
    digitalWrite(12, HIGH);
  } 
  else 
  {
    if (moisture < 400) 
    {
      digitalWrite(11, HIGH);
    } 
    else 
    {
      if (moisture < 600) 
      {
        digitalWrite(10, HIGH);
      } 
      else 
      {
        if (moisture < 800) 
        {
          digitalWrite(9, HIGH);
        } 
        else 
        {
          digitalWrite(8, HIGH);
        }
      }
    }
  }
```
