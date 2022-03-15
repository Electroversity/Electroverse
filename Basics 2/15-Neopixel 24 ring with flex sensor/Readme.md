<h1>Neopixel-24 ring with Flex sensor</h1>

<div>
    <img width=450 align=right src="https://github.com/Curovearth/Dive-into-Electronics/blob/main/Basics%202/15-Neopixel%2024%20ring%20with%20flex%20sensor/ezgif.com-gif-maker.gif">
    <p>This circuit represents the NeoPixel ring from Adafruit consists of 24 individually addressable RGB LEDs that can all be controlled with a flex sensor , as the sensor bends the particular number of LEDs present in ring stops glowing and vice versa. This ring has a 2.6″ (66 mm) outer diameter and 2.05″ (52.5 mm) inner diameter.<br><br>
  Have Fun !</p>
    
  <h3>Components Required</h3>
  <ol>
    <li>1x Neopixel-24 ring</li>
    <li>1x Flex sensor</li>
    <li>1x 10kohm resistor</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>

## CODE
#### Important part of the code 

```C++
void loop()
 {
  fsrReading=analogRead(fsrPin);
  
  num=map(fsrReading,60,256,1,24);
  Serial.println("Led Number="+String(num));
  if(num!=prev_num)
  {
    switch_led(strip.Color(0,0,0),1,24);
    switch_led(strip.Color(255,50,40),50,num);
    prev_num=num;
    delay(500);
  }
}
void switch_led(uint32_t color,int time,int led_num){
  for(uint16_t i=0;i<led_num;i++){
    strip.setPixelColor(i,color);
    strip.show();
    delay(time);
  }
}
```
