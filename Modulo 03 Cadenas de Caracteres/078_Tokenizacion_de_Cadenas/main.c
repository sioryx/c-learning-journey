#include <stdio.h>
#include <string.h>

int main(void)
{
    char nombre[100] = "Cloud,Tifa,Sephiroth";
    char* contexto;

    /* Obtiene el primer token utilizando la coma como delimitador. */
    char* token = strtok_s(nombre, ",", &contexto);

    /* Continúa extrayendo tokens hasta que no queden más. */
    while (token != NULL)
    {
        printf("%s\n", token);

        /* Las llamadas posteriores continúan desde la posición
           almacenada en 'contexto'. */
        token = strtok_s(NULL, ",", &contexto);
    }

    return 0;
}