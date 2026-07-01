#include <stdio.h>

void miStrcpyIndices(char destino[], char origen[]);

int main(void)
{
    char nombre[100];
    char copia[100];

    printf("Ingrese su nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    miStrcpyIndices(copia, nombre);

    printf("Nombre: %s\n", nombre);
    printf("Copia : %s\n", copia);

    return 0;
}

void miStrcpyIndices(char destino[], char origen[])
{
    int i = 0;

    while (origen[i] != '\0')
    {
        if (origen[i] == '\n')
        {
            origen[i] = '\0';
            break;
        }

        destino[i] = origen[i];
        i++;
    }

    destino[i] = '\0';
}