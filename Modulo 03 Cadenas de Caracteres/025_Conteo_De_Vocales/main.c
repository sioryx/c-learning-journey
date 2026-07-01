#include <stdio.h>

int main(void)
{
    char nombre[20];
    int contador = 0;

    printf("Ingrese su nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    for (int i = 0; nombre[i] != '\0'; i++)
    {
        if (nombre[i] == 'a' || nombre[i] == 'A' ||
            nombre[i] == 'e' || nombre[i] == 'E' ||
            nombre[i] == 'i' || nombre[i] == 'I' ||
            nombre[i] == 'o' || nombre[i] == 'O' ||
            nombre[i] == 'u' || nombre[i] == 'U')
        {
            contador++;
        }
    }

    printf("El nombre contiene %d vocales\n", contador);

    return 0;
}