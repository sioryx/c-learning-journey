#include <stdio.h>
#include <string.h>

int main(void)
{
    char nombre[20];

    /* Rellena todo el arreglo con el carácter '*'. */
    memset(nombre, '*', sizeof(nombre));

    /* Muestra el contenido del arreglo carácter por carácter. */
    for (int i = 0; i < sizeof(nombre); i++)
    {
        printf("%c\n", nombre[i]);
    }

    return 0;
}