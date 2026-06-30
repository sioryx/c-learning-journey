#include <stdio.h>

int main(void)
{
    char nombre[10];
    int contador = 0;

    printf("Ingrese el nombre del personaje:\n");
    fgets(nombre, sizeof(nombre), stdin);

    for (int i = 0; nombre[i] != '\0'; i++)
    {
        if (nombre[i] != '\n')
        {
            printf("%c\n", nombre[i]);
            contador++;
        }
    }

    printf("Longitud: %d\n", contador);

    return 0;
}