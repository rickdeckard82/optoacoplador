#include <Arduino.h>
#define IGNICAOPIN 33  // Pino ligado ao coletor do optoacoplador

void setup() {
  Serial.begin(115200);
  pinMode(IGNICAOPIN, INPUT);  // Define como entrada
  Serial.println("Monitorando a chave de ignição...");
}

void loop() {
  int estado = digitalRead(IGNICAOPIN);

  if (estado == LOW) {
    Serial.println("🔑 Chave LIGADA (sinal presente)");
  } else {
    Serial.println("🔒 Chave DESLIGADA (sem sinal)");
  }

  delay(1000); // Aguarda 1 segundo
}