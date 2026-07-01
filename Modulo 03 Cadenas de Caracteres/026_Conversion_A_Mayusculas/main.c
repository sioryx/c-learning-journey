#include <stdio.h>

int main(void)
{
    char nombre[10];

    printf("Ingrese su nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    /* Recorre la cadena hasta encontrar el terminador '\0'. */
    for (int i = 0; nombre[i] != '\0'; i++)
    {
        /* Convierte las letras minúsculas a mayúsculas utilizando códigos ASCII. */
        if (nombre[i] >= 'a' && nombre[i] <= 'z')
        {
            nombre[i] = nombre[i] - 32;
        }

        printf("%c", nombre[i]);
    }

    return 0;
}

