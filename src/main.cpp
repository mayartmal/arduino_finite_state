#include <Arduino.h>

const int ledPin = 13;

int ledState = LOW;
long previousMillis = 0;

long interval = 300;

void setup() {
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    //текущее время в миллисек
    unsigned long currentMillis = millis();

    if (currentMillis - previousMillis > interval) {
      previousMillis = currentMillis;

      if (ledState == LOW) {
        ledState = HIGH;
      } else {
        ledState = LOW;
      }

      digitalWrite(ledPin, ledState);
    }

    Serial.println("ok");
}
