#include <stdio.h>

int main(void)
{
    // Declaración de la variable
    int calificacion;

    // Solicitar la calificación al usuario
    printf("Ingrese la calificacion: ");
    scanf_s("%d", &calificacion);

    // Verificar si la calificación es aprobatoria
    if (calificacion >= 6 && calificacion <= 10)
    {
        printf("Usted esta aprobado.\n");
    }
    else
    {
        printf("Usted ha reprobado.\n");
    }

    // Finaliza correctamente el programa
    return 0;
}