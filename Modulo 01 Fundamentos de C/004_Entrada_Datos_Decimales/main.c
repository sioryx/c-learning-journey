#include <stdio.h>

int main(void)
{
    // Declaración de la variable
    float decimal;

    // Solicitar un número decimal al usuario
    printf("Ingrese un numero decimal: ");
    scanf_s("%f", &decimal);

    // Mostrar el número con dos cifras decimales
    printf("Numero decimal a dos cifras = %.2f\n", decimal);

    // Finaliza correctamente el programa
    return 0;
}