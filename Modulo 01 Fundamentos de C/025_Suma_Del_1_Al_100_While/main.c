#include <stdio.h>

int main(void)
{
    // Declaración e inicialización de variables
    int suma = 0;
    int i = 1;

    // Sumar los números del 1 al 100
    while (i <= 100)
    {
        suma = suma + i;
        printf("%d\n", suma);
        i++;
    }

    // Finaliza correctamente el programa
    return 0;
}