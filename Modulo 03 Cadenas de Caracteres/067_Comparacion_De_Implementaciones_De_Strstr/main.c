#include <stdio.h>

int miStrstr(char texto[], char palabra[]);
int miStrstrP(char texto[], char palabra[]);

int main(void)
{
    char cadena[100] = "Bienvenido Cloud Strife";
    char busqueda[100] = "Cloud";

    printf("Indices : %d\n", miStrstr(cadena, busqueda));
    printf("Punteros: %d\n", miStrstrP(cadena, busqueda));

    return 0;
}

int miStrstr(char texto[], char palabra[])
{
    int i = 0;

    while (texto[i] != '\0')
    {
        int j = 0;

        while (texto[i + j] == palabra[j] &&
               palabra[j] != '\0')
        {
            j++;
        }

        if (palabra[j] == '\0')
        {
            return i;
        }

        i++;
    }

    return -1;
}

int miStrstrP(char texto[], char palabra[])
{
    char* pTexto = texto;

    while (*pTexto != '\0')
    {
        /* Copia temporal del recorrido del texto. */
        char* t = pTexto;

        /* Copia temporal de la palabra buscada. */
        char* p = palabra;

        while (*t == *p && *p != '\0')
        {
            t++;
            p++;
        }

        if (*p == '\0')
        {
            return pTexto - texto;
        }

        pTexto++;
    }

    return -1;
}