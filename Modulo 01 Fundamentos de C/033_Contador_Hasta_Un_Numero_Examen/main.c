#include <stdio.h>

int main(void)
{
    // Declaración de variables
    int numero;
    int contador = 1;

    // Solicitar un número al usuario
    printf("Por favor ingrese un numero positivo: ");
    scanf_s("%d", &numero);

    // Mostrar los números desde 1 hasta el número ingresado
    while (contador <= numero)
    {
        printf("%d\n", contador);
        contador++;
    }

    // Finaliza correctamente el programa
    r