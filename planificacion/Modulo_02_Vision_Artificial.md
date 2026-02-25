# Módulo 2: Visión Artificial - El Ojo del Robot

## Objetivo
Entrenar un modelo de clasificación de imágenes y vincularlo a una respuesta robótica física.

## Cronograma (2.5 Horas)

### 1. Introducción a la Visión por Computadora (20 min)
- ¿Cómo ve una computadora? (Píxeles, matrices y reconocimiento de patrones).
- Aplicaciones: Reconocimiento facial, autos autónomos, clasificación industrial.

### 2. Entrenamiento con Teachable Machine (50 min)
- Acceso a [Teachable Machine](https://teachablemachine.withgoogle.com/).
- **Actividad:** Entrenar un modelo con 2 o 3 clases de objetos (ejemplo: Manzana, Banana, Nada).
- Conceptos de ML: *Data gathering*, *Training*, *Exporting model*.

### 3. Integración con el Robot (60 min)
- Uso de PictoBlox (u otro software de bloques con IA).
- Importar el modelo entrenado.
- **Lógica de programación:** 
    - `SI el modelo predice "Manzana" ENTONCES mover Servo a 90°`.
    - `SI el modelo predice "Banana" ENTONCES mover Servo a 180°`.

### 4. Pruebas y Ajustes (20 min)
- ¿Por qué falla a veces? (Iluminación, fondo, sesgo en los datos).
- Optimizando el set de entrenamiento.

---

## El Proyecto del Módulo: "El Clasificador Ecológico"
Los estudiantes deben crear una mini-estación de reciclaje que abra una compuerta diferente según si el objeto mostrado a la cámara es Plástico o Papel.

## Materiales Requeridos
- Cámara Web (o cámara de la laptop).
- Servomotor.
- Objetos de prueba (Papel, botellas de plástico).
- PictoBlox con extensión de "Machine Learning".
