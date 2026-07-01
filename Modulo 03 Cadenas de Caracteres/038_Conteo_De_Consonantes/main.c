#include <stdio.h>

int miStrlen(char nombre[]);

int main(void)
{
    int contador = 0;
    int longitud = 0;
    char nombre[100];

    printf("Ingrese su nombre por favor:\n");
    fgets(nombre, sizeof(nombre), stdin);

    longitud = miStrlen(nombre);

    for (int i = 0; i < longitud; i++)
    {
        if (nombre[i] != 'a' && nombre[i] != 'A' &&
            nombre[i] != 'e' && nombre[i] != 'E' &&
            nombre[i] != 'i' && nombre[i] != 'I' &&
            nombre[i] != 'o' && nombre[i] != 'O' &&
            nombre[i] != 'u' && nombre[i] != 'U' &&
            nombre[i] != ' ')
        {
            contador++;
        }
    }

    printf("Su nombre tiene %d consonantes. Es un nombre digno de un heroe.\n", contador);

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