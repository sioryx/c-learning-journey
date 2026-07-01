#include <stdio.h>

void miStrrev(char origen[]);

int main(void)
{
    char nombre[100] = "Cloud";

    printf("%s\n", nombre);

    miStrrev(nombre);

    printf("%s\n", nombre);

    return 0;
}

void miStrrev(char origen[])
{
    int i = 0;
    int longitud = 0;
    char caracterTemporal;

    /* Calcula la longitud de la cadena. */
    while (origen[longitud] != '\0')
    {
        longitud++;
    }

    /* Ajusta la posición al último carácter válido. */
    longitud--;

    /* Intercambia los caracteres desde ambos extremos
       hasta llegar al centro de la cadena. */
    while (i < longitud)
    {
        caracterTemporal = origen[i];
        origen[i] = origen[longitud];
        origen[longitud] = caracterTemporal;

        i++;
        longitud--;
    }
}