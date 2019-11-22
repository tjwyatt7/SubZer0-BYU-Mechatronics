#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);
int xVal = 0;
int yVal = 0;

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  lcd.begin(16,2);

  lcd.setCursor(0,0);
  lcd.print("Ready");
  delay(3000);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.print("xVal: " + xVal + "/n");
  lcd.print("yVal: " + yVal + "/n");
  lcd.clear();
}
