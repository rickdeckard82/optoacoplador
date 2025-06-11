#include <Arduino.h>
#define OPTO1 34
#define OPTO2 35

void setup() {
  Serial.begin(115200);
  pinMode(OPTO1, INPUT);
  pinMode(OPTO2, INPUT);
}

void loop() {
  Serial.print("Opto1: ");
  Serial.print(digitalRead(OPTO1) == LOW ? "ATIVO" : "INATIVO");
  Serial.print(" | Opto2: ");
  Serial.println(digitalRead(OPTO2) == LOW ? "ATIVO" : "INATIVO");
  delay(500);
}
