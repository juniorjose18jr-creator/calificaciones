# Sistema de control de calificaciones

**Estudiante:** Junior Ivón José Jean | **Matrícula:** 2026-1655
**Asignatura:** Lógica de Programación | **Profesor:** Gamalier Reyes del Carmen

## Descripción
Programa en C++ para "La Nueva Escuela" que registra las calificaciones de un grupo de estudiantes, calcula el promedio de cada uno, indica si aprobó (70 o más) o reprobó y muestra un resumen del grupo.

## Entrada
- Cantidad de estudiantes (mayor que 0).
- Nombre y 4 calificaciones (de 0 a 100) de cada estudiante.
- Respuesta s/n para procesar otro grupo.

## Proceso
- Valida la cantidad de estudiantes y cada calificación, y las vuelve a pedir si son inválidas.
- Suma las 4 notas y calcula el promedio de cada estudiante.
- Cuenta aprobados y reprobados, acumula los promedios y guarda el mejor promedio.

## Salida
- Promedio de cada estudiante y si está Aprobado o Reprobado.
- Resumen: aprobados, reprobados, promedio del grupo y el estudiante con el mejor promedio (con dos decimales).

## Uso de los bucles
- **do-while (programa completo):** repite todo mientras el usuario responda "s"; se usa do-while porque el programa debe ejecutarse al menos una vez.
- **do-while (validaciones):** vuelve a pedir la cantidad de estudiantes o la calificación si el valor es inválido; se pide al menos una vez y se repite mientras sea incorrecto.
- **for (estudiantes):** recorre cada estudiante, porque ya se sabe cuántos son.
- **for (calificaciones):** recorre las 4 notas, porque es una cantidad fija.

## Capturas de ejecución
**Prueba 1 – Validaciones y grupo de 2 estudiantes:**
![Prueba 1](prueba1.png)

**Prueba 2 – Procesar otro grupo:**
![Prueba 2](prueba2.png)

**Prueba 3 – Fin del programa:**
![Prueba 3](prueba3.png)
