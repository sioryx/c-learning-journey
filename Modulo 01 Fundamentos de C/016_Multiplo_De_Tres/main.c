#include <stdio.h>

int main(void)
{
    // Declaración de la variable
    int numero;

    // Solicitar un número al usuario
    printf("Ingrese un numero: ");
    scanf_s("%d", &numero);

    // Verificar si el número es múltiplo de 3
    if (numero % 3 == 0)
    {
        printf("El numero es multiplo de 3.\n");
    }
    else
    {
        printf("El numero no es multiplo de 3.\n");
    }

    // Finaliza correctamente el programa
    return 0;
}