# Guía Módulo 4: El Vínculo Serial (PC + IA + Arduino)

Este módulo es el corazón técnico del trayecto. Aquí es donde la IA deja de ser "algo en la pantalla" y pasa a mover algo real.

## Concepto
La PC actúa como el "Cerebro" (tiene la cámara y procesa la IA) y el Arduino como el "Cuerpo" (mueve el motor). La comunicación se realiza por el cable USB (**Puerto Serie**).

## Opción A: Usando PictoBlox (Recomendado para 15-17 años iniciantes)
1. **Abrir PictoBlox** y seleccionar la placa **Arduino Uno**.
2. Añadir la extensión **Machine Learning**.
3. **Lógica de Bloques:**
   - [Al presionar bandera verde]
   - [Por siempre]
     - [Si la clase detectada es "Objeto A"]
       - [Enviar 90 al Servomotor en Pin 9]
     - [Sino si la clase detectada es "Objeto B"]
       - [Enviar 0 al Servomotor en Pin 9]

## Opción B: Usando Python + Arduino (Nivel más avanzado)
Si el grupo avanza rápido, pueden usar un script de Python que use el modelo de Teachable Machine.

### Lógica en Python (PC):
```python
import serial
import time
# Configurar el puerto del Arduino
arduino = serial.Serial('COM3', 9600) 

# ... lógica de detección de cámara ...
if prediccion == "Abierto":
    arduino.write(b'1') # Manda un 1 al Arduino
else:
    arduino.write(b'0') # Manda un 0
```

### Lógica en Arduino:
```cpp
#include <Servo.h>
Servo miServo;

void setup() {
  Serial.begin(9600);
  miServo.attach(9);
}

void loop() {
  if (Serial.available() > 0) {
    char dato = Serial.read();
    if (dato == '1') miServo.write(90);
    if (dato == '0') miServo.write(0);
  }
}
```

## Tips para el Docente
- Asegurarse de que el puerto COM no esté ocupado por otro programa.
- Explicar que el "delay" en la detección es normal debido al procesamiento de la imagen.
