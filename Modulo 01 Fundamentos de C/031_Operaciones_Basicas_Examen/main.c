#include <stdio.h>

int main(void)
{
    // Declaración de variables
    int a;
    int b;

    // Solicitar los valores al usuario
    printf("Ingrese el primer valor: ");
    scanf_s("%d", &a);

    printf("Ingrese el segundo valor: ");
    scanf_s("%d", &b);

    // Realizar las operaciones aritméticas
    int suma = a + b;
    int resta = a - b;
    int multiplicacion = a * b;
    int division = a / b;

    // Mostrar los resultados
    printf("%d + %d = %d\n", a, b, suma);
    printf("%d - %d = %d\n", a, b, resta);
    printf("%d * %d = %d\n", a, b, multiplicacion);
    printf("%d / %d = %d\n", a, b, division);

    // Finaliza correctamente el programa
    return 0;
}