#include <stdio.h>

int main(void)
{
    // Declaración de variables
    int numero;
    int contador;
    int resultado;

    // Solicitar el número al usuario
    printf("Por favor ingrese un numero: ");
    scanf_s("%d", &numero);

    // Mostrar la tabla de multiplicar del número
    for (contador = 1; contador <= 10; contador++)
    {
        resultado = numero * contador;
        printf("%d x %d = %d\n", numero, contador, resultado);
    }

    // Finaliza correctamente el programa
    return 0;
}