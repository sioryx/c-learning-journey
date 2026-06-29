#include <stdio.h>

int main(void)
{
    // Declaración e inicialización de variables
    int a = 10;
    int b = 2;
    int residuo;

    // Obtener el residuo de la división
    residuo = a % b;

    // Mostrar el resultado
    printf("El resto de la division es: %d\n", residuo);

    // Finaliza correctamente el programa
    return 0;
}