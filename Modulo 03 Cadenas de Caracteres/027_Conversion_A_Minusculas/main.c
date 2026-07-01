#include <stdio.h>

int main(void)
{
    char nombre[10];

    printf("Ingrese su nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    for (int i = 0; nombre[i] != '\0'; i++)
    {
        if (nombre[i] >= 'A' && nombre[i] <= 'Z')
        {
            nombre[i] = nombre[i] + 32;
        }

        printf("%c", nombre[i]);
    }

    return 0;
}