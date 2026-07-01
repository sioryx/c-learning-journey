#include <stdio.h>

void miStrcat(char destino[], char origen[]);

int main(void)
{
    char frase[200] = "Bienvenido Cloud";
    char titulo[200] = " el Invencible";
    char destino[200] = " al reino";

    printf("Frase inicial: %s\n", frase);

    miStrcat(frase, titulo);
    printf("Primera concatenacion: %s\n", frase);

    miStrcat(frase, destino);
    printf("Segunda concatenacion: %s\n", frase);

    return 0;
}

void miStrcat(char destino[], char origen[])
{
    while (*destino != '\0')
    {
        destino++;
    }

    while (*origen != '\0')
    {
        *destino = *origen;
        destino++;
        origen++;
    }

    *destino = '\0';
}