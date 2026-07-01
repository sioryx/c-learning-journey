#include <stdio.h>

int miStrlen(char nombre[]);

int main(void)
{
    char nombre[100];
    char nombre1[100];

    printf("Ingrese el nombre del primer heroe:\n");
    fgets(nombre, sizeof(nombre), stdin);

    printf("Ingrese el nombre del segundo heroe:\n");
    fgets(nombre1, sizeof(nombre1), stdin);

    int longitud = miStrlen(nombre);
    int longitud1 = miStrlen(nombre1);

    if (longitud == longitud1)
    {
        printf("El gremio los considera aptos para formar equipo.\n");
    }
    else
    {
        printf("No son aptos para formar equipo.\n");
    }

    return 0;
}

int miStrlen(char nombre[])
{
    int longitud = 0;

    /* Calcula la longitud de la cadena ignorando el salto de línea de fgets(). */
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