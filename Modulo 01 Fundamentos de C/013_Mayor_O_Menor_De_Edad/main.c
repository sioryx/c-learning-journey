#include <stdio.h>

int main(void)
{
    // Declaración de la variable
    int edad;

    // Solicitar la edad al usuario
    printf("Ingrese su edad: ");
    scanf_s("%d", &edad);

    // Verificar si el usuario es mayor o menor de edad
    if (edad >= 18)
    {
        printf("Usted es mayor de edad.\n");
    }
    else
    {
        printf("Usted es menor de edad.\n");
    }

    // Finaliza correctamente el programa
    return 0;
}