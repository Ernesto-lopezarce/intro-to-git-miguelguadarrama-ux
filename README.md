[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=23837508&assignment_repo_type=AssignmentRepo)

## Sistema de Evaluación Académica Avanzado


Que usar ::

- Uso correcto de `if`, `else if`, `else`
- Uso de operadores `&&`, `||`
- Comparaciones relacionales
- Indentación adecuada
- Organización lógica de condiciones

---

## Programa

El programa debe solicitar al usuario:

1. Edad
2. Promedio general
3. Número de materias reprobadas
4. Número de faltas acumuladas

Con base en esta información, deberá evaluar las siguientes condiciones.

---

## 1. Estado de reinscripción

- Si tiene más de 3 materias reprobadas → No puede reinscribirse
- Si tiene 2 o menos → Puede reinscribirse
- Si tiene exactamente 3 → Revisión especial

---

## 2. Elegibilidad para beca

El estudiante puede solicitar beca si cumple TODAS las siguientes condiciones:

- Promedio mayor o igual a 9.0
- Ninguna materia reprobada
- Menos de 5 faltas

Si no cumple todas, debe indicarse que no es elegible.

---

## 3. Situación crítica

El estudiante entra en situación crítica si se cumple al menos una de las siguientes:

- Promedio menor a 6.0
- Más de 4 materias reprobadas
- Más de 15 faltas acumuladas

Debe mostrarse un mensaje especial indicando esta situación.

---

## Requisitos obligatorios

El programa debe:

- Utilizar al menos:
  - Un `if`
  - Un bloque `if - else`
  - Un bloque `else if`
  - Un `if` anidado
- Mantener correcta indentación
- No utilizar ciclos
- Mostrar mensajes claros en pantalla

---

## Estructura base sugerida

```c
#include <stdio.h>

int main() {

    int edad;
    float promedio;
    int reprobadas;
    int faltas;

    printf("Edad: ");
    scanf("%d", &edad);

    printf("Promedio: ");
    scanf("%f", &promedio);

    printf("Materias reprobadas: ");
    scanf("%d", &reprobadas);

    printf("Faltas acumuladas: ");
    scanf("%d", &faltas);

    // Construir aquí la lógica del programa

    return 0;
}
```

---

## Preguntas a responder

1. ¿Qué operadores lógicos utilizaste y por qué?
2. ¿Qué condición fue la más compleja de estructurar?
3. ¿Tu código podría generar contradicciones? ¿Por qué?

---

## Criterio de evaluacion

- El programa compila sin errores.
- Las condiciones se evalúan correctamente.
- La estructura del código es clara y ordenada.
- Se utilizan adecuadamente operadores relacionales y lógicos.

---
## Entregables
  - Código fuente 
  - Captura de pantalla del programa funcionando

# TBBkoa_PE_26A
