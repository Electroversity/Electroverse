<h1>DC motor control with IR Remote</h1>

<div>
   <p>The following program is focused on interfacing 2 DC motors to an IR remote similar to what happens with an RC car at home.</p>
  
  >Note: Try using 4DC motors as well. And make sure that you follow the PWM pins role.
  
  <img width=720 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/09-DC%20motor%20control%20with%20IR%20Remote/Dc%20motor%20control.gif">
 <br>
     
  <p>Have Fun !</p>
  
  <h3>Components Required</h3>
  <ol>
    <li>1x LCD Display</li>
    <li>1x Resistor 1kΩ</li>
    <li>2x DC motor</li>
    <li>1x L293D motor driver</li>
    <li>1x IR sensor</li>
    <li>IR remote</li>
     <li>1x Potentiometer</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
</div><br><br>

  <b>Motor Driver Configuration</b>
  
  8pins above and 8 pins down

  | Channel 1 Config | VCC | PWM pin | DC motor | GND | GND | DC motor | Digital Pin | PWM Pin | 
  | --- | --- | --- | --- | --- | --- | --- | --- | --- |
  | Channel 1 | Power 1 | Input 4 | Output 4 | GND | GND | Output 3 | Input 3 | Enable 3&4 |
  | Channel 2 | Enable 1&2 | Input 1 | Output 1 | GND | GND | Output 2 | Input 1 | Power 2 |
  | Channel 2 Config | PWM Pin | Digital Pin | DC motor | GND | GND | DC Motor | PWM pin | VCC |
  
 <b>A 16x2 character LCD has 16 pin interface as mentioned below:</b>
    
| GND | VCC | VEE | RS | RW | E | D0 | D1 | D2 | D3 | D4 | D5 | D6 | D7 | LED+ | LED- | 
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | 
| GND | VCC | Contrast Adj | Register Select(Digital pin) | Read Write(GND) | Data Enable(Digital pin) | D0 | D1 | D2 | D3 | D4(Digital Pin) | D5(Digital Pin) | D6(Digital Pin) | D7(Digital Pin) | LED+ | LED-(Use a Resistor) | 
  
</p>



<h2>CODE</h2>
<p><b>Since the code is a bit long you'll have to head over to <a href="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%202/09-DC%20motor%20control%20with%20IR%20Remote/DC%20motor%20control%20with%20IR%20remote.ino">CODE !</a></p>
