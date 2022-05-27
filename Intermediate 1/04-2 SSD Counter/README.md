<h1>2 Seven Segment Display Interface</h1>

<div>
    <img width=500 align=right src="https://github.com/Electroversity/Electroverse/blob/main/Intermediate%201/04-2%20SSD%20Counter/2ssd.gif">
    <p>Here we have made a counter till 99 using 2 Seven segment displays. Additionally we have used 2 pnp transistors connected to each of the segment display.<br><br>The only catch in the following circuit to represent the numbers in the segment display is that we have defined an array where we have described each number's i.e., from 0-9 a,b,c,d,e,f,g values which you can see in the code represented in 1 or 0</p>
    <p>Have Fun !</p>
</div>  <br>   
 

<div>
  <h3>Components Required</h3>
  <ol>
    <li>2x Seven Segment Display</li>
    <li>2x PNP Transistor</li>
    <li>2x Resistor 1k ohms</li>
    <li>Jumper Wires</li>
    <li>Arduino UNO</li>
  </ol>
    
</div>


  
## CODE

<b>Important part of the Code and the rest of the code has been provided in the .ino file</b>

```C++
 /*
Below we write the function to control the transistor which takes
the left/right counter as the input
*/
void transistor_control(int left, int right)
{
  digitalWrite(transistors[0], HIGH);	//transistor=13
  digitalWrite(transistors[1], LOW);	//transistor=12
  write(right);
  delay(100);
  digitalWrite(transistors[0], LOW);
  digitalWrite(transistors[1], HIGH);
  write(left);
}

/*
Below we glow the led according to the left/right counter
updation which feeds in here where we used the arrays to glow
that specific bits of the number.
*/
void write(int i){
  digitalWrite(a, arr[i][0]);
  digitalWrite(b, arr[i][1]);
  digitalWrite(c, arr[i][2]);
  digitalWrite(d, arr[i][3]);
  digitalWrite(e, arr[i][4]);
  digitalWrite(f, arr[i][5]);
  digitalWrite(g, arr[i][6]);
}
```
