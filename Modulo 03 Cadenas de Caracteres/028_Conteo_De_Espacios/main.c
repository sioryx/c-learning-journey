#include <stdio.h>

int main(void)
{
    char nombre[20];
    int contador = 0;

    printf("Ingrese su nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    for (int i = 0; nombre[i] != '\0'; i++)
    {
        if (nombre[i] == ' ')
        {
            contador++;
        }
    }

    printf("El nombre contiene %d espacios\n", contador);

    return 0;
}