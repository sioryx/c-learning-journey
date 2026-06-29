#include <stdio.h>

int main(void)
{
    // Declaración de la variable
    int nota;

    // Solicitar la calificación
    printf("Ingrese su calificacion: ");
    scanf_s("%d", &nota);

    // Clasificar la calificación
    if (nota >= 9 && nota <= 10)
    {
        printf("Excelente.\n");
    }
    else if (nota >= 6 && nota <= 8)
    {
        printf("Aprobado.\n");
    }
    else if (nota >= 0 && nota <= 5)
    {
        printf("Reprobado.\n");
    }
    else
    {
        printf("Numero invalido.\n");
    }

    // Finaliza correctamente el programa
    return 0;
}