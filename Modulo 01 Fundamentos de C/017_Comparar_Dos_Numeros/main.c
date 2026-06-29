#include <stdio.h>

int main(void)
{
    // Declaración de variables
    int a, b;

    // Solicitar los números al usuario
    printf("Ingrese el primer numero: ");
    scanf_s("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf_s("%d", &b);

    // Comparar los números
    if (a < b)
    {
        printf("%d es mayor que %d.\n", b, a);
    }
    else
    {
        printf("%d es mayor que %d.\n", a, b);
    }

    // Finaliza correctamente el programa
    return 0;
}