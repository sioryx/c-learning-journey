#include <stdio.h>

void miStrcpyPunteros(char destino[], char origen[]);
int miStrlenPunteros(char nombre[]);
int myStrcmpPunteros(char destino[], char origen[]);

/*
    Implementaciones equivalentes mediante índices.

    Se conservan únicamente con fines didácticos para comparar ambos
    enfoques (índices y punteros). En este ejercicio se utiliza la
    implementación basada en punteros.
*/

void miStrcpyIndice(char destino[], char origen[]);
int miStrlenIndice(char nombre[]);
int myStrcmpIndices(char destino[], char origen[]);

int main(void)
{
    char nombre[100];
    char copia[100];

    printf("Ingrese un nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    miStrcpyPunteros(copia, nombre);

    if (myStrcmpPunteros(nombre, copia))
    {
        printf("La copia fue exitosa.\n");
    }
    else
    {
        printf("No se realizo la copia correctamente.\n");
    }

    return 0;
}

void miStrcpyPunteros(char destino[], char origen[])
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

int miStrlenPunteros(char nombre[])
{
    int longitud = 0;

    while (*nombre != '\0')
    {
        if (*nombre == '\n')
        {
            *nombre = '\0';
            break;
        }

        nombre++;
        longitud++;
    }

    return longitud;
}

int myStrcmpPunteros(char destino[], char origen[])
{
    while (*origen == *destino && *origen != '\0')
    {
        origen++;
        destino++;
    }

    return (*origen == *destino);
}

/* ========================================================= */
/* Implementaciones mediante índices (referencia didáctica). */
/* ========================================================= */

void miStrcpyIndice(char destino[], char origen[])
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

int myStrcmpIndices(char destino[], char origen[])
{
    int i = 0;

    while (origen[i] == destino[i] && origen[i] != '\0')
    {
        i++;
    }

    return (origen[i] == destino[i]);
}