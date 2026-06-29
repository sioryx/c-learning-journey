#include <stdio.h>

int main(void)
{
    // Declaración de variables
    int numero = 0;
    int suma = 0;

    // Solicitar números hasta que el usuario ingrese -1
    while (numero != -1)
    {
        printf("Ingrese un numero entero (-1 para finalizar): ");
        scanf_s("%d", &numero);

        if (numero != -1)
        {
            suma += numero;
        }
    }

    // Mostrar el resultado
    printf("La suma de todos los numeros es: %d\n", suma);

    // Finaliza correctamente el programa
    return 0;
}