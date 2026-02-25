# Trayecto: Inteligencia Artificial y Robótica (Visión Artificial)

Este repositorio contiene todo el material necesario para llevar adelante el trayecto formativo de **IA aplicada a la Robótica** utilizando **Arduino Uno**, dirigido a adolescentes de 15 a 17 años.

## 🎯 Objetivo
Que los estudiantes construyan un prototipo físico (Clasificador o Guardián) que tome decisiones autónomas basadas en lo que "ve" a través de una cámara, procesando la información mediante modelos de IA.

---

## 🛣️ Elige tu Camino de Aprendizaje

Este trayecto está diseñado para adaptarse al nivel de los estudiantes. Los facilitadores pueden elegir entre dos modalidades:

### 🟢 Opción A: Camino Inicial (PictoBlox)
**Ideal para:** Estudiantes sin experiencia previa, grupos numerosos o tiempo reducido.
- **Herramientas:** PictoBlox (No requiere instalar Python ni librerías).
- **Enfoque:** Programación por bloques (tipo Scratch).
- **Ventaja:** Todo está integrado. La cámara y la IA funcionan dentro del mismo programa.
- **[Guía Paso a Paso - PictoBlox](./guias/Guia_PictoBlox.md)**

### 🔵 Opción B: Camino Avanzado (Python + Arduino)
**Ideal para:** Estudiantes con nociones de programación, grupos de escuelas técnicas o interesados en el código real.
- **Herramientas:** Python, OpenCV, TensorFlow y Arduino IDE.
- **Enfoque:** Programación textual.
- **Ventaja:** Aprenden cómo funcionan las librerías profesionales de IA en la industria.
- **[Guía Paso a Paso - Python](./guias/Guia_Python_Avanzado.md)**

---

## 📁 Contenido del Repositorio

- **[`MATERIALES.md`](./MATERIALES.md)**: 📋 Lista completa de Hardware y Software.
- **[`planificacion/`](./planificacion/)**: 🗓️ Detalle de los 8 módulos (20hs totales).
- **[`codigo/`](./codigo/)**: 💻 Archivos `.ino` (Arduino) y `.py` (Python).
- **[`guias/`](./guias/)**: 📖 Paso a paso para PictoBlox y Python Avanzado.
- **[`hardware/`](./hardware/)**: 🔌 Diagramas de conexión y electrónica.


---

## 🚀 Inicio Rápido para Facilitadores

1.  **Descarga**: Clona este repositorio o descárgalo como ZIP.
2.  **Prueba de Hardware**: Abre `/codigo/Arduino_Base_IA.ino`, cárgalo en tu Arduino y conecta el servo al pin 9.
3.  **Prueba de IA**:
    *   Abre una terminal en la carpeta `/codigo`.
    *   Asegúrate de tener conectado el Arduino.
    *   Ejecuta `python Python_Bridge_IA.py`.
    *   El sistema usará el modelo de ejemplo incluido para reaccionar a la cámara.

---

## 💡 Consejos para la Clase
- Fomentar la **creatividad en el prototipado físico**: No todo es código, la caja o estructura del robot define su "personalidad".
- Utilizar el **Modo Live de PictoBlox** como alternativa si los estudiantes tienen dificultades con Python.

---
*Desarrollado para el Programa de Robótica Educativa y Tecnología.*
