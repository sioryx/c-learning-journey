#include <stdio.h>

int miStrcmpIndices(char cadena1[], char cadena2[]);
void delSaltodeLinea(char cadena[]);
void mensajeCmp(int valor);

int main(void)
{
    char nombre[100];

    printf("Ingrese un nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    delSaltodeLinea(nombre);

    int autorizado =
        miStrcmpIndices(nombre, "Cloud") ||
        miStrcmpIndices(nombre, "Tifa") ||
        miStrcmpIndices(nombre, "Barret");

    mensajeCmp(autorizado);

    return 0;
}

int miStrcmpIndices(char cadena1[], char cadena2[])
{
    int sonIguales = 1;
    int i = 0;

    for (i = 0; cadena1[i] == cadena2[i] && cadena1[i] != '\0'; i++)
    {
    }

    if (cadena1[i] != cadena2[i])
    {
        sonIguales = 0;
    }

    return sonIguales;
}

void delSaltodeLinea(char cadena[])
{
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] == '\n')
        {
            cadena[i] = '\0';
            break;
        }
    }
}

void mensajeCmp(int valor)
{
    switch (valor)
    {
        case 1:
            printf("Bienvenido al gremio.\n");
            break;

        case 0:
            printf("Acceso denegado.\n");
            break;

        default:
            printf("Datos no validos.\n");
    }
}