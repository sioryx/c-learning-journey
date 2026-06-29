#include <stdio.h>

int main(void)
{
    // Declaración de variables
    int a, b, c;

    // Solicitar los tres números
    printf("Ingrese el primer numero: ");
    scanf_s("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf_s("%d", &b);

    printf("Ingrese el tercer numero: ");
    scanf_s("%d", &c);

    // Determinar cuál es el número mayor
    if (a > b && a > c)
    {
        printf("%d es el mayor de los numeros.\n", a);
    }

    if (b > a && b > c)
    {
        printf("%d es el mayor de los numeros.\n", b);
    }

    if (c > a && c > b)
    {
        printf("%d es el mayor de los numeros.\n", c);
    }

    // Finaliza correctamente el programa
    return 0;
}