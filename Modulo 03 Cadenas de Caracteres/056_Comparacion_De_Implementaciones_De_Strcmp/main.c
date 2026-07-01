#include <stdio.h>

int miStrcmpWhile(char cadena1[], char cadena2[]);
int miStrcmpFor(char cadena1[], char cadena2[]);

int main(void)
{
    char cadena1[100] = "Cloud";
    char cadena2[100] = "Cloud";

    if (miStrcmpFor(cadena1, cadena2))
    {
        printf("Son iguales.\n");
    }
    else
    {
        printf("No son iguales.\n");
    }

    return 0;
}

/* Implementación mediante ciclo while.
   Se conserva para comparar ambos enfoques. */
int miStrcmpWhile(char cadena1[], char cadena2[])
{
    int sonIguales = 1;
    int i = 0;

    while (cadena1[i] == cadena2[i] && cadena1[i] != '\0')
    {
        i++;
    }

    if (cadena1[i] != cadena2[i])
    {
        sonIguales = 0;
    }

    return sonIguales;
}

/* Implementación equivalente mediante ciclo for. */
int miStrcmpFor(char cadena1[], char cadena2[])
{
    int sonIguales = 1;
    int i;

    for (i = 0; cadena1[i] == cadena2[i] && cadena1[i] != '\0'; i++)
    {
    }

    if (cadena1[i] != cadena2[i])
    {
        sonIguales = 0;
    }

    return sonIguales;
}