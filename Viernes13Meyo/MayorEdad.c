#include <stdio.h>
//angel guadarrama  
int main() {
    // Declaración de variables
    int edad, reprobadas, faltas;
    float promedio;

    // Entrada de datos
    printf("--- Sistema de Gestión Escolar ---\n");
    printf("Ingrese la edad del estudiante: ");
    scanf("%d", &edad);
    printf("Ingrese el promedio general: ");
    scanf("%f", &promedio);
    printf("Ingrese el número de materias reprobadas: ");
    scanf("%d", &reprobadas);
    printf("Ingrese el número de faltas acumuladas: ");
    scanf("%d", &faltas);

    printf("\n--- Resultados de la Evaluación ---\n");

    // 1. Estado de reinscripción (Uso de else if)
    if (reprobadas > 3) {
        printf("Estado: No puede reinscribirse.\n");
    } 
    else if (reprobadas == 3) {
        printf("Estado: Requiere revisión especial.\n");
    } 
    else {
        printf("Estado: Puede reinscribirse.\n");
    }

    // 2. Elegibilidad para beca (Uso de if anidado)
    // Se evalúa si el promedio es excelente primero
    if (promedio >= 9.0) {
        // Bloque anidado para verificar el resto de condiciones
        if (reprobadas == 0 && faltas < 5) {
            printf("Beca: El estudiante es ELEGIBLE para la beca.\n");
        } 
        else {
            printf("Beca: No elegible (incumple materias o faltas).\n");
        }
    } 
    else {
        printf("Beca: No es elegible (promedio insuficiente).\n");
    }

    // 3. Situación crítica (Uso de un if simple con operadores lógicos)
    if (promedio < 6.0 || reprobadas > 4 || faltas > 15) {
        printf("ALERTA: El estudiante se encuentra en SITUACIÓN CRÍTICA.\n");
    }

    return 0;
}