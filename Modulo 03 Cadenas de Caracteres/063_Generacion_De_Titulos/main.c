#include <stdio.h>

void miStrcat(char destino[], char origen[]);
void eliminarSaltoDeLinea(char cadena[]);

int main(void)
{
    char nombre[100];

    char titulo1[100] = " el Tejedor de sueños";
    char titulo2[100] = " del abismo";
    char titulo3[100] = " patea pollos";

    int opcion = 0;

    printf("Ingrese un nombre y el gremio le sugerira un titulo:\n");
    fgets(nombre, sizeof(nombre), stdin);

    eliminarSaltoDeLinea(nombre);

    printf("Escoja uno de estos titulos:\n");
    printf("1.- %s\n", titulo1);
    printf("2.- %s\n", titulo2);
    printf("3.- %s\n", titulo3);

    scanf_s("%d", &opcion);

    switch (opcion)
    {
        case 1:
            miStrcat(nombre, titulo1);
            printf("Bienvenido al gremio %s\n", nombre);
            break;

        case 2:
            miStrcat(nombre, titulo2);
            printf("Bienvenido al gremio %s\n", nombre);
            break;

        case 3:
            miStrcat(nombre, titulo3);
            printf("Bienvenido al gremio %s\n", nombre);
            break;

        default:
            printf("Opcion invalida.\n");
    }

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