#include <stdio.h>

int main(void)
{
    char nombre[100];
    char nombre1[100];
    char* ptrNombre2 = nombre1;
    int i = 0;

    printf("Ingrese un nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    printf("¿Con qué otro nombre le gustaría combinarlo?\n");
    fgets(nombre1, sizeof(nombre1), stdin);

    /* Elimina el salto de línea del primer nombre y obtiene su longitud. */
    for (i = 0; nombre[i] != '\0'; i++)
    {
        if (nombre[i] == '\n')
        {
            nombre[i] = '\0';
            break;
        }
    }

    /* Elimina el salto de línea del segundo nombre. */
    for (int j = 0; nombre1[j] != '\0'; j++)
    {
        if (nombre1[j] == '\n')
        {
            nombre1[j] = '\0';
            break;
        }
    }

    /* Copia el contenido de la segunda cadena al final de la primera. */
    while (*ptrNombre2 != '\0')
    {
        nombre[i] = *ptrNombre2;
        i++;
        ptrNombre2++;
    }

    /* Agrega el terminador de cadena. */
    nombre[i] = '\0';

    printf("Nombre generado: %s\n", nombre);

    return 0;
}