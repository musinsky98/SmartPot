#include <Arduino.h>

#define LED_PIN 2  // Most ESP32 boards have an onboard LED connected to GPIO 2

void setup() {
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_PIN, HIGH);  // Turn the LED on
    delay(200);                  // Wait for 1 second
    digitalWrite(LED_PIN, LOW);   // Turn the LED off
    delay(200);                  // Wait for 1 second
}