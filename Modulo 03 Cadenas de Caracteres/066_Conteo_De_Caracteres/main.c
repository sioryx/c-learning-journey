#include <stdio.h>

int miStrchrCount(char cadena[], char busqueda);

int main(void)
{
    char nombre[100] = "bumblebee";
    char busqueda = 'b';

    printf("%d\n", miStrchrCount(nombre, busqueda));

    return 0;
}

int miStrchrCount(char cadena[], char busqueda)
{
    int contador = 0;
    int i = 0;

    while (cadena[i] != '\0')
    {
        if (cadena[i] == busqueda)
        {
            contador++;
        }

        i++;
    }

    return contador;
}