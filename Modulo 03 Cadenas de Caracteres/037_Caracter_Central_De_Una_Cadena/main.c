#include <stdio.h>

int miStrlen(char nombre[]);

int main(void)
{
    char nombre[100];

    printf("Un profeta dice que el caracter central del nombre de un heroe revela su destino.\n");
    printf("¿Cual es el tuyo?\n");

    fgets(nombre, sizeof(nombre), stdin);

    printf("El caracter central es: %c\n", nombre[miStrlen(nombre) / 2]);

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