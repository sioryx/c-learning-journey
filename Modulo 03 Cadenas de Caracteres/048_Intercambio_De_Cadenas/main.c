#include <stdio.h>

void miStrcpy(char destino[], char origen[]);

int main(void)
{
    char nombre1[100] = "Cloud";
    char nombre2[100] = "Sephiroth";
    char temporal[100];

    printf("Antes : %s y %s\n", nombre1, nombre2);

    /* Intercambia el contenido de ambas cadenas utilizando
       un arreglo temporal. */
    miStrcpy(temporal, nombre1);
    miStrcpy(nombre1, nombre2);
    miStrcpy(nombre2, temporal);

    printf("Despues: %s y %s\n", nombre1, nombre2);

    return 0;
}

void miStrcpy(char destino[], char origen[])
{
    while (*origen != '\0')
    {
        *destino = *origen;
        destino++;
        origen++;
    }

    *destino = '\0';
}