<h1>Liquid Crystal Display</h1>

<div>
    <img width=700 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Basics%201/08-LCD/LCD.png">
    <p>Here we deal with 16x2 character type LCD display.<br><br>
        
  Have Fun !</p>
    
  <h3>Components Required</h3>
  <ol>
    <li>1x Potentiometer</li>
    <li>1x Resistor 1k</li>
    <li>Jumper Wires</li>
    <li>LCD Display</li>
    <li>Arduino UNO</li>
  </ol>
    <br><br>

A 16x2 character LCD has 16 pin interface as mentioned below:
    
| GND | VCC | VEE | RS | RW | E | D0 | D1 | D2 | D3 | D4 | D5 | D6 | D7 | LED+ | LED- | 
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | 
| GND | VCC | Contrast Adj | Register Select(Digital pin) | Read Write(GND) | Data Enable(Digital pin) | D0 | D1 | D2 | D3 | D4(Digital Pin) | D5(Digital Pin) | D6(Digital Pin) | D7(Digital Pin) | LED+ | LED-(Use a Resistor) | 
    
 
    
</div>


  
## CODE
```C++

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);
}


```
