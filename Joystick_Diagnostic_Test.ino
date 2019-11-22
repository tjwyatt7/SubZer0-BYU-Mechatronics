#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define joy_xPin A1
#define joy_yPin A2

LiquidCrystal_I2C lcd(0x3F,16,2);
int xVal = 0;
int yVal = 0;

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  lcd.begin(16,2);
  pinMode(joy_xPin, INPUT);
  pinMode(joy_yPin, INPUT);

  lcd.setCursor(0,0);
  lcd.print("Ready");
  delay(3000);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  xVal = analogRead(joy_xPin);
  yVal = analogRead(joy_yPin);

  
  lcd.print("xVal: " + xVal); // Print out current x-value
  lcd.print("/nyVal: " + yVal); // Print out current y-value
  lcd.clear();                       // Clear out extra space
}
