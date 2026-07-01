#include <stdio.h>

int miStrcmp(char cadena1[], char cadena2[]);
int miStrlen(char cadena[]);
void eliminarSaltoDeLinea(char cadena[]);
void filtroNombre(int nombreRegistrado, int longitudNombre);
void filtroContrasena(int longitudContrasena);

int main(void)
{
    char nombre[100];
    char contrasena[100];

    printf("Ingrese un nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    eliminarSaltoDeLinea(nombre);

    int nombreRegistrado = miStrcmp(nombre, "Cloud");
    int longitudNombre = miStrlen(nombre);

    filtroNombre(nombreRegistrado, longitudNombre);

    if (!nombreRegistrado && longitudNombre > 3)
    {
        fgets(contrasena, sizeof(contrasena), stdin);

        eliminarSaltoDeLinea(contrasena);

        filtroContrasena(miStrlen(contrasena));
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

int miStrlen(char cadena[])
{
    int longitud = 0;

    while (*cadena != '\0')
    {
        cadena++;
        longitud++;
    }

    return longitud;
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

void filtroNombre(int nombreRegistrado, int longitudNombre)
{
    if (nombreRegistrado)
    {
        printf("Este nombre ya esta registrado.\n");
    }
    else if (longitudNombre > 3)
    {
        printf("Ingrese una contrasena.\n");
    }
    else
    {
        printf("Nombre demasiado corto.\n");
    }
}

void filtroContrasena(int longitudContrasena)
{
    if (longitudContrasena > 3)
    {
        printf("Registro exitoso.\n");
    }
    else
    {
        printf("Contrasena demasiado corta.\n");
    }
}
