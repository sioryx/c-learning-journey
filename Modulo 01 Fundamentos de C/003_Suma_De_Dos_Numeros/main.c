#include <stdio.h>

int main(void)
{
    int a, b, suma;

    printf("Ingrese un numero:\n");
    scanf_s("%d", &a);

    printf("Ingrese otro numero:\n");
    scanf_s("%d", &b);

    suma = a + b;

    printf("La suma de ambos numeros es: %d\n", suma);

    return 0;
}