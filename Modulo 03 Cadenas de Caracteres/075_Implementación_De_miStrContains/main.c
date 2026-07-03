#include <stdio.h>
int miStrContains(char texto[], char palabra[]);
/*Nombre: miStrCointains
  Descripción: Verifica si una cadena existe dentro de otra
  usando la funcion de miStrstrP
  Parametros: texto en donde se realiza la busqueda
  Palabra a buscar dentro del texto
  Retorno: Regresa 1 si coinciden y 0 si no*/
int miStrstrP(char texto[], char palabra[]);
int main(void)
{
    char nombre[100] = "Cloud Strife";
    char palabra[100] = "Strifu";
    int resultado = miStrContains(nombre, palabra);
    
    if (resultado == 1)
    {
        printf("Coincide");
    }
    else if (resultado == 0)
    {
        printf("No coinciden");
    }


    return 0;
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
int miStrContains(char texto[], char palabra[])
{
    if (miStrstrP(texto, palabra) != -1)
    {
        return 1;
    }

    return 0;
}