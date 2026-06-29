#include <stdio.h>

int main(void)
{
    // Declaración de la variable
    int numero;

    // Solicitar un número al usuario
    printf("Ingresa un numero: ");
    scanf_s("%d", &numero);

    // Obtener el residuo de la división entre 2
    numero = numero % 2;

    // Verificar si el número es par o impar
    if (numero == 0)
    {
        printf("El numero es par.\n");
    }
    else
    {
        printf("El numero es impar.\n");
    }

    // Finaliza correctamente el programa
    return 0;
}