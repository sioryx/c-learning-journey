#include <stdio.h>

void miStrcpy(char destino[], char origen[], int limite);

int main(void)
{
    char nombre[100];
    char copia[100];

    printf("Ingrese un nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    printf("Nombre original : %s", nombre);

    miStrcpy(copia, nombre, 5);

    printf("Copia parcial   : %s\n", copia);

    return 0;
}

void miStrcpy(char destino[], char origen[], int limite)
{
    int i = 0;

    while (*origen != '\0')
    {
        if (i == limite)
        {
            break;
        }

        *destino = *origen;

        destino++;
        origen++;
        i++;
    }

    *destino = '\0';
}