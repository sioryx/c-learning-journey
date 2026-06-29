#include <stdio.h>

int main(void)
{
    // Declaración de la variable
    int numero;

    // Solicitar un número al usuario
    printf("Por favor ingrese un numero: ");
    scanf_s("%d", &numero);

    // Determinar si el número es positivo, negativo o cero
    if (numero > 0)
    {
        printf("El numero es positivo.\n");
    }
    else if (numero < 0)
    {
        printf("El numero es negativo.\n");
    }
    else
    {
        printf("El numero es cero.\n");
    }

    // Finaliza correctamente el programa
    return 0;
}