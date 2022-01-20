//Initialising the variables
int a = 6;
int b = 7;
int c = 9;
int d = 10;
int e = 11;
int f = 5;
int g = 4;

int transistors[] = {13, 12};

int leftCounter = 0;
int rightCounter = 0;

/*
Bit 0 corresponds to segment A, bit 0 to segment B and so on. 
In order to display the number 1, segments B and C need to be lit, 
so that is represented by the value 1001100. 
*/
int arr[][7] = {
 //		Bit
 //0  1  2  3  4  5  6  	Representation
  {0, 0, 0, 0, 0, 0, 1},		//1
  {1, 0, 0, 1, 1, 1, 1},		//2
  {0, 0, 1, 0, 0, 1, 0},		//3
  {0, 0, 0, 0, 1, 1, 0},		//4
  {1, 0, 0, 1, 1, 0, 0},		//5
  {0, 1, 0, 0, 1, 0, 0},		//6
  {0, 1, 0, 0, 0, 0, 0},		//7
  {0, 0, 0, 1, 1, 1, 1},		//8
  {0, 0, 0, 0, 0, 0, 0},		//9
  {0, 0, 0, 0, 1, 0, 0} 		//0
};

void setup(){
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(transistors[0], OUTPUT);
  pinMode(transistors[1], OUTPUT);
}

void loop() {
  transistor_control(leftCounter, rightCounter);
  delay(1000);
  rightCounter++;
  if (rightCounter > 9){
  	rightCounter = 0;
    
    leftCounter++;
    if(leftCounter > 9)
      leftCounter = 0;
  }
    
}

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