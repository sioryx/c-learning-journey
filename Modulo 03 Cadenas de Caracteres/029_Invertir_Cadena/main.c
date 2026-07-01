#include <stdio.h>

int main(void)
{
    char nombre[100];
    int longitud = 0;

    printf("Ingrese su nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    for (int i = 0; nombre[i] != '\0'; i++)
    {
        if (nombre[i] == '\n')
        {
            nombre[i] = '\0';
            break;
        }

        longitud++;
    }

    printf("Cadena invertida: ");

    for (int j = longitud - 1; j >= 0; j--)
    {
        printf("%c", nombre[j]);
    }

    printf("\n");

    return 0;
}