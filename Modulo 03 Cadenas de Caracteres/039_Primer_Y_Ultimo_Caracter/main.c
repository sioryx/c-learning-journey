#include <stdio.h>

int miStrlen(char nombre[]);

int main(void)
{
    char nombre[100];

    printf("Un oraculo afirma que:\n");
    printf("* La primera letra representa el origen del heroe.\n");
    printf("* La ultima letra representa su destino.\n");
    printf("Ahora, heroe, dime tu nombre:\n");

    fgets(nombre, sizeof(nombre), stdin);

    int longitud = miStrlen(nombre);

    if (longitud == 0)
    {
        printf("No se ingreso ningun nombre.\n");
        return 0;
    }

    char primeraLetra = nombre[0];
    char ultimaLetra = nombre[longitud - 1];

    printf("Tu origen esta en %c y tu destino en %c.\n",
           primeraLetra, ultimaLetra);

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