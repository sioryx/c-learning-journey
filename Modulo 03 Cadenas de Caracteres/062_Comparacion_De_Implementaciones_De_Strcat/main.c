#include <stdio.h>

void miStrcatP(char destino[], char origen[]);
void miStrcatI(char destino[], char origen[]);

int main(void)
{
    char nombreIndices[100] = "Cloud";
    char nombrePunteros[100] = "Cloud";
    char apellido[100] = "Strife";

    miStrcatI(nombreIndices, apellido);
    miStrcatP(nombrePunteros, apellido);

    printf("Indices : %s\n", nombreIndices);
    printf("Punteros: %s\n", nombrePunteros);

    return 0;
}

/* Implementación mediante punteros. */
void miStrcatP(char destino[], char origen[])
{
    while (*destino != '\0')
    {
        destino++;
    }

    while (*origen != '\0')
    {
        *destino = *origen;
        destino++;
        origen++;
    }

    *destino = '\0';
}

/* Implementación mediante índices. */
void miStrcatI(char destino[], char origen[])
{
    int i = 0;
    int j = 0;

    while (destino[i] != '\0')
    {
        i++;
    }

    while (origen[j] != '\0')
    {
        destino[i] = origen[j];
        i++;
        j++;
    }

    destino[i] = '\0';
}