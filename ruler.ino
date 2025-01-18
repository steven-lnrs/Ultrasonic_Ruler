#include <LCD_I2C.h>
//setting variables
LCD_I2C lcd(0x3F);
const int trigPin = 6;
const int echoPin = 9;
long duration;
float distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);

  lcd.begin();
  lcd.backlight();
  lcd.print("Distance: ");
  lcd.setCursor(7, 2);
  lcd.print("cm");
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  
  if (duration == 0) {
    Serial.println("No echo detected");
  } else { //calculation line below
    distance = duration * 0.034 / 2;
    lcd.setCursor(0, 1);
    lcd.print("       ");  
    lcd.setCursor(0, 1);
    lcd.print(distance, 2);
  }

  delay(500);
}
