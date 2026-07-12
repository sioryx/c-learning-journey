#include <stdio.h>
void miStrReplace(char destino[], char fraseOriginal[], char palabraBuscar[], char palabraNueva[]);
int miStrstrP(char texto[], char palabra[]);
void miStrcpy(char destino[], char origen[]);
void miStrcatP(char destino[], char origen[]);
void miStrReplaceAll(char destino[], char fraseOriginal[], char palabraBuscar[], char palabraNueva[]);
int main(void)
{
    char frase[100] = "Cloud pelea con Cloud porque Cloud ganó";
    char busqueda[100] = "Cloud";
    char remplazo[100] = "Zack";
    char fraseModificada[100];

    miStrReplaceAll(fraseModificada, frase, busqueda, remplazo);
    printf("%s\n", fraseModificada);



    return 0;
}



void miStrReplace(char destino[], char fraseOriginal[], char palabraBuscar[], char palabraNueva[])
{
    int indice = miStrstrP(fraseOriginal, palabraBuscar);
    if (indice == -1)
    {
        miStrcpy(destino, fraseOriginal);
        return;
    }
    int i = 0;
    for (i = 0; i < indice; i++)
    {
        destino[i] = fraseOriginal[i];
    }
    destino[i] = '\0';
    miStrcatP(destino, palabraNueva);
    int largoPalabraBuscar = 0;
    while (palabraBuscar[largoPalabraBuscar] != '\0')
    {
        largoPalabraBuscar++;
    }
    char* restoFrase = fraseOriginal + indice + largoPalabraBuscar;
    miStrcatP(destino, restoFrase);
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
void miStrcpy(char destino[], char origen[]) {
    while (*origen != '\0') {
        *destino = *origen;
        destino++;
        origen++;
    }
    *destino = '\0';
}
void miStrcatP(char destino[], char origen[])
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

void miStrReplaceAll(char destino[], char fraseOriginal[], char palabraBuscar[], char palabraNueva[])
{       
    char tempA[100];
    char tempB[100];
    miStrcpy(tempA, fraseOriginal);
    char* origenActual = tempA;
    char* destinoActual = tempB;
    while (miStrstrP(origenActual,palabraBuscar)!= -1)
    {
        miStrReplace(destinoActual, origenActual, palabraBuscar, palabraNueva);
        char* aux = origenActual;
        origenActual = destinoActual;
        destinoActual = aux;
    }
    miStrcpy(destino, origenActual);
}