#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// The additional white space is intentional to make things legible and look nice.
String message = "      How was your day?,let's get started with Arduino and next level of learning.. Have fun! ;)              ";
int ii = 0;
int strLength;
String toShow;

void setup() {
  strLength = message.length();
  
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 1);
  // Print a message to the LCD.
  lcd.print("Hello there!");
  delay(5000);

  lcd.clear();
  lcd.home();
}

void loop() {
  lcd.home();

  // Get 16 characters so that we can display on the LCD
  toShow = message.substring(ii,ii+16);
  
  // print the number of seconds since reset:
  lcd.print(toShow);

  ii = ii + 2;

  // We have to reset ii after there is less text displayed.
  if(ii>(strLength-16)) {
    ii = 0;
   }

  delay(500);
}
