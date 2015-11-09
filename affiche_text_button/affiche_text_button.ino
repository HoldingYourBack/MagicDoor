//DFRobot.com
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x20,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

const int buttonPin = 7;     // the number of the pushbutton pin
int buttonState;

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.backlight();
  lcd.home();
  pinMode(buttonPin, INPUT);
  
  lcd.print("Hello world...");
  delay(100);

}

void loop()
{
  
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    lcd.print("Coucou !");
    delay(100);
  } else {
    lcd.print("bye !");
    delay(100);
    
  }
}

