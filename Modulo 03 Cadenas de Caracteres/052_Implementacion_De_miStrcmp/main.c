#include <stdio.h>

int miStrcmp(char cadena1[], char cadena2[]);

int main(void)
{
    char nombre1[100];
    char nombre2[100];

    printf("Ingrese el primer nombre:\n");
    fgets(nombre1, sizeof(nombre1), stdin);

    printf("Ingrese el segundo nombre:\n");
    fgets(nombre2, sizeof(nombre2), stdin);

    if (miStrcmp(nombre1, nombre2))
    {
        printf("Son iguales.\n");
    }
    else
    {
        printf("No son iguales.\n");
    }

    return 0;
}

int miStrcmp(char cadena1[], char cadena2[])
{
    while (*cadena1 == *cadena2 && *cadena1 != '\0')
    {
        cadena1++;
        cadena2++;
    }

    return (*cadena1 == *cadena2);
}