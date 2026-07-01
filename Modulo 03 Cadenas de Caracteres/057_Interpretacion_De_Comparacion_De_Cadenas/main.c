#include <stdio.h>

int miStrcmp(char cadena1[], char cadena2[]);
void mensajeCmp(int valor);

int main(void)
{
    char inventario1[100] = "Espada Legendaria";
    char inventario2[100] = "Espada Legendaroa";

    mensajeCmp(miStrcmp(inventario1, inventario2));

    return 0;
}

int miStrcmp(char cadena1[], char cadena2[])
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

void mensajeCmp(int valor)
{
    switch (valor)
    {
        case 1:
            printf("Ambos jugadores llevan el mismo objeto.\n");
            break;

        case 0:
            printf("Los jugadores llevan objetos diferentes.\n");
            break;

        default:
            printf("Resultado de comparacion no valido.\n");
    }
}