#include <stdio.h>

int miStrlen(char cadena[]);

int main(void)
{
    char cadena[100];

    printf("Ingrese un nombre:\n");
    fgets(cadena, sizeof(cadena), stdin);

    printf("Longitud = %d\n", miStrlen(cadena));

    return 0;
}

int miStrlen(char cadena[])
{
    int longitud = 0;

    /* Calcula la longitud de la cadena ignorando el salto de línea de fgets(). */
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] == '\n')
        {
            cadena[i] = '\0';
            break;
        }

        longitud++;
    }

    return longitud;
}