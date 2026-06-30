#include <stdio.h>

int main(void)
{
    int vida = 100;
    int* punteroVida = &vida;

    printf("Valor original de vida: %d\n", vida);

    *punteroVida = 150;

    printf("Nuevo valor de vida despues de modificarlo mediante el puntero: %d\n", vida);

    return 0;
}