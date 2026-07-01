#include <stdio.h>

void eliminarSaltoDeLinea(char cadena[]);
int miStrcmp(char cadena1[], char cadena2[]);
void mensajeCmp(int valor);

int main(void)
{
    char nombre[100];
    char contrasena[100];

    printf("Ingrese su nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    eliminarSaltoDeLinea(nombre);

    printf("Ingrese su contrasena:\n");
    fgets(contrasena, sizeof(contrasena), stdin);

    eliminarSaltoDeLinea(contrasena);

    int accesoValido =
        miStrcmp(nombre, "Cloud") &&
        miStrcmp(contrasena, "BusterSword");

    mensajeCmp(accesoValido);

    return 0;
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

void mensajeCmp(int valor)
{
    switch (valor)
    {
        case 1:
            printf("Bienvenido al gremio de aventureros.\n");
            break;

        case 0:
            printf("Nombre o contrasena incorrectos.\n");
            break;

        default:
            printf("Datos no validos.\n");
    }
}