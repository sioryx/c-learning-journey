#include <stdio.h>

void miStrcpy(char destino[], char origen[]);

int main(void)
{
    char nombre[100] = "Cloud";

    printf("Antes : %s\n", nombre);

    miStrcpy(nombre, "Sephiroth");

    printf("Despues: %s\n", nombre);

    return 0;
}

void miStrcpy(char destino[], char origen[])
{
    while (*origen != '\0')
    {
        if (*origen == '\n')
        {
            *origen = '\0';
            break;
        }

        *destino = *origen;
        destino++;
        origen++;
    }

    *destino = '\0';
}