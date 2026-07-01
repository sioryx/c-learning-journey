#include <stdio.h>

int miStrcmp(char cadena1[], char cadena2[]);

int main(void)
{
    char nombre1[100] = "Cloud";
    char nombre2[100] = "Sephiroth";

    if (miStrcmp(nombre1, nombre2))
    {
        printf("Acceso concedido.\n");
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