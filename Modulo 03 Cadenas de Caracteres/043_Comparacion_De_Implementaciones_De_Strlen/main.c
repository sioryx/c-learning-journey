#include <stdio.h>
#include <stdio.h>

int miStrlenPuntero(char nombre[]);
int miStrlenIndice(char nombre[]);

int main(void)
{
    char nombre[100];

    printf("Ingrese un nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    printf("Longitud con punteros: %d\n", miStrlenPuntero(nombre));
    printf("Longitud con indices : %d\n", miStrlenIndice(nombre));

    return 0;
}

int miStrlenIndice(char nombre[])
{
    int longitud = 0;

    for (int i = 0; nombre[i] != '\0'; i++)
    {
        if (nombre[i] == '\n')
        {
            nombre[i] = '\0';
            break;
        }

        longitud++;
    }

    return longitud;
}

int miStrlenPuntero(char nombre[])
{
    int longitud = 0;
    char* ptrNombre = nombre;

    while (*ptrNombre != '\0')
    {
        if (*ptrNombre == '\n')
        {
            *ptrNombre = '\0';
            break;
        }

        ptrNombre++;
        longitud++;
    }

    return longitud;
}