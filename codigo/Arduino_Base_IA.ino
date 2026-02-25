/*
  CODIGO BASE: SISTEMA DE REACCION POR IA
  Este codigo permite que el Arduino reciba ordenes de la PC (via Serial)
  y accione un Servomotor y LEDs de estado.
*/

#include <Servo.h>

const int PIN_SERVO = 9;
const int PIN_LED_OK = 13;
const int PIN_LED_WAIT = 12;

Servo miServo;

void setup() {
  Serial.begin(9600);
  miServo.attach(PIN_SERVO);
  pinMode(PIN_LED_OK, OUTPUT);
  pinMode(PIN_LED_WAIT, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char comando = Serial.read();
    if (comando == '1') {
      miServo.write(90);
      delay(2000);
      miServo.write(0);
    }
  }
}
