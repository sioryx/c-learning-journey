#include <stdio.h>

int main(void)
{
    // Declaración de la variable
    int edad;

    // Solicitar la edad al usuario
    printf("Por favor ingrese su edad: ");
    scanf_s("%d", &edad);

    // Comparar la edad ingresada
    if (edad >= 18)
    {
        printf("Usted tiene 18 años o más.\n");
    }
    else if (edad == 30)
    {
        printf("Usted tiene 30 años.\n");
    }
    else if (edad < 65)
    {
        printf("Usted tiene menos de 65 años.\n");
    }

    // Finaliza correctamente el programa
    return 0;
}