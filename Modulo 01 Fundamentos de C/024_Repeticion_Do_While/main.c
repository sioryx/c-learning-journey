#include <stdio.h>

int main(void)
{
    // Declaración e inicialización de la variable
    int contador = 5;

    // Mostrar el mensaje cinco veces
    do
    {
        printf("Hola\n");
        contador--;
    } while (contador >= 1);

    // Finaliza correctamente el programa
    return 0;
}