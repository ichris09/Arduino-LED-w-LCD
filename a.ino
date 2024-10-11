#include <LiquidCrystal.h>

// Initialize the LCD, connect the pins as RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int ledPin = 8;  // Pin for the LED (light bulb)
int ledState = LOW;  // Start with the LED off

void setup() {
  lcd.begin(16, 2);  // Start the LCD (16 columns and 2 rows)
  pinMode(ledPin, OUTPUT);  // Set the LED pin as an output

  // Print initial message to the LCD
  lcd.print("Light is OFF");
}

void loop() {
  // Toggle the LED every 2 seconds
  if (ledState == LOW) {
    ledState = HIGH;
    digitalWrite(ledPin, ledState);
    lcd.clear();
    lcd.print("Light is ON");
  } else {
    ledState = LOW;
    digitalWrite(ledPin, ledState);
    lcd.clear();
    lcd.print("Light is OFF");
  }

  delay(2000);  // Wait for 2 seconds before toggling
}