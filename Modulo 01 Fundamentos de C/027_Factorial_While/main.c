#include <stdio.h>

int main(void)
{
    // Declaración de variables
    int numero;
    int factorial = 1;
    int contador = 1;

    // Solicitar un número al usuario
    printf("Ingrese un numero positivo: ");
    scanf_s("%d", &numero);

    // Verificar que el número sea válido
    if (numero >= 0)
    {
        // Calcular el factorial
        while (contador <= numero)
        {
            factorial *= contador;
            contador++;
        }

        printf("El factorial de %d es: %d\n", numero, factorial);
    }
    else
    {
        printf("Numero invalido.\n");
    }

    // Finaliza correctamente el programa
    return 0;
}