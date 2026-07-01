#include <stdio.h>

int main(void)
{
    char nombre[100];
    int contador = 0;
    char letra = '\0';

    printf("Ingrese su nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    printf("Ingrese una letra del nombre:\n");
    scanf_s("%c", &letra, 1);

    for (int i = 0; nombre[i] != '\0'; i++)
    {
        if (nombre[i] == '\n')
        {
            nombre[i] = '\0';
            break;
        }

        if (nombre[i] == letra)
        {
            contador++;
        }
    }

    printf("La letra se repite %d veces.\n", contador);

    return 0;
}