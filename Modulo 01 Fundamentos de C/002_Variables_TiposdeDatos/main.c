#include <stdio.h>

// Declaración de variables globales
int edad = 36;
float promedio = 8.5f;
char inicial = 'S';

int main(void)
{
    // Mostrar el contenido de las variables utilizando
    // los especificadores de formato correspondientes.

    printf("Hola, mi edad es: %d\n", edad);
    printf("Mi promedio en la universidad es: %.1f\n", promedio);
    printf("Mi inicial es: %c\n", inicial);

    // Finaliza correctamente el programa.
    return 0;
}