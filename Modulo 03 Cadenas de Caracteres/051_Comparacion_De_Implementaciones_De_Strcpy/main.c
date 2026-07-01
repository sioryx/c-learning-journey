#include <stdio.h>

void miStrcpyIndices(char destino[], char origen[]);
void miStrcpyPunteros(char destino[], char origen[]);

int main(void)
{
    char nombre[100] = "Cloud";
    char copiaIndices[100];
    char copiaPunteros[100];

    miStrcpyIndices(copiaIndices, nombre);
    miStrcpyPunteros(copiaPunteros, nombre);

    printf("Original : %s\n", nombre);
    printf("Indices  : %s\n", copiaIndices);
    printf("Punteros : %s\n", copiaPunteros);

    return 0;
}

/* Ambas funciones realizan la misma operación.
   Se conservan para comparar la implementación
   mediante índices y mediante punteros. */

void miStrcpyIndices(char destino[], char origen[])
{
    int i = 0;

    while (origen[i] != '\0')
    {
        destino[i] = origen[i];
        i++;
    }

    destino[i] = '\0';
}

void miStrcpyPunteros(char destino[], char origen[])
{
    while (*origen != '\0')
    {
        *destino = *origen;
        destino++;
        origen++;
    }

    *destino = '\0';
}