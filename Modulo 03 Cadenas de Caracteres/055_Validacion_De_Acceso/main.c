#include <stdio.h>

int miStrcmp(char cadena1[], char cadena2[]);
void eliminarSaltoDeLinea(char cadena[]);

int main(void)
{
    char nombreIngresado[100];
    char nombrePermitido[100] = "Cloud";

    printf("Ingrese su nombre:\n");
    fgets(nombreIngresado, sizeof(nombreIngresado), stdin);

    eliminarSaltoDeLinea(nombreIngresado);

    if (miStrcmp(nombreIngresado, nombrePermitido))
    {
        printf("Bienvenido al gremio.\n");
    }
    else
    {
        printf("Acceso denegado.\n");
    }

    return 0;
}

int miStrcmp(char cadena1[], char cadena2[])
{
    int sonIguales = 1;

    while (*cadena1 == *cadena2 && *cadena1 != '\0')
    {
        cadena1++;
        cadena2++;
    }

    if (*cadena1 != *cadena2)
    {
        sonIguales = 0;
    }

    return sonIguales;
}

/* Elimina el salto de línea agregado por fgets(). */
void eliminarSaltoDeLinea(char cadena[])
{
    while (*cadena != '\0')
    {
        if (*cadena == '\n')
        {
            *cadena = '\0';
            break;
        }

        cadena++;
    }
}