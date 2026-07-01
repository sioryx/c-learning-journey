#include <stdio.h>

int miStrlen(char nombre[]);

int main(void)
{
    char nombre[100];

    printf("Ingrese un nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    printf("Longitud: %d\n", miStrlen(nombre));

    return 0;
}

int miStrlen(char nombre[])
{
    char* ptrNombre = nombre;
    int longitud = 0;

    /* Recorre la cadena mediante un puntero hasta encontrar el terminador. */
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