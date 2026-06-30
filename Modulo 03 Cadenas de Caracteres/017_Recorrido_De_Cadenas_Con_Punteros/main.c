#include <stdio.h>

int main(void)
{
    char arma[] = "Espada";
    char* ptrArma = arma;

    printf("Recorrido de la cadena:\n");

    while (*ptrArma != '\0')
    {
        printf("%c\n", *ptrArma);
        ptrArma++;
    }

    return 0;
}