#include <stdio.h>

int main(void)
{
    // Declaración de la variable
    int calificacion;

    // Solicitar la calificación al usuario
    printf("Ingrese la calificacion: ");
    scanf_s("%d", &calificacion);

    // Verificar si el alumno aprobó o reprobó
    if (calificacion >= 6)
    {
        printf("Aprobado.\n");
    }
    else
    {
        printf("Reprobado.\n");
    }

    // Finaliza correctamente el programa
    return 0;
}