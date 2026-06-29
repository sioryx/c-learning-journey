#include <stdio.h>

int main(void)
{
    // Declaración de variables
    int numero;
    int digitos = 0;

    // Solicitar un número al usuario
    printf("Por favor ingrese un numero: ");
    scanf_s("%d", &numero);

    // Contar la cantidad de dígitos
    do
    {
        digitos++;
        numero = numero / 10;
    } while (numero != 0);

    // Mostrar el resultado
    printf("El numero cuenta con %d digitos.\n", digitos);

    // Finaliza correctamente el programa
    return 0;
}