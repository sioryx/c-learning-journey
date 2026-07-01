#include <stdio.h>

int miStrlen(char nombre[]);

int main(void)
{
    char nombre[100];

    printf("Ingrese un nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    if (miStrlen(nombre) < 3)
    {
        printf("Nombre no valido, intente de nuevo.\n");
    }
    else
    {
        printf("Nombre valido.\n");
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