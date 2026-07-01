#include <stdio.h>

int miStrchrP(char cadena[], char busqueda);
int miStrchrI(char cadena[], char busqueda);

int main(void)
{
    char nombre[] = "Sephiroth";
    char busqueda = 'p';

    printf("Punteros: %d\n", miStrchrP(nombre, busqueda));
    printf("Indices : %d\n", miStrchrI(nombre, busqueda));

    return 0;
}

int miStrchrP(char cadena[], char busqueda)
{
    int posicion = 0;

    while (*cadena != '\0')
    {
        if (*cadena == busqueda)
        {
            return posicion + 1;
        }

        cadena++;
        posicion++;
    }

    /* Devuelve -1 si el carácter no se encuentra. */
    return -1;
}

int miStrchrI(char cadena[], char busqueda)
{
    int i = 0;

    while (cadena[i] != '\0')
    {
        if (cadena[i] == busqueda)
        {
            return i + 1;
        }

        i++;
    }

    /* Devuelve -1 si el carácter no se encuentra. */
    return -1;
}