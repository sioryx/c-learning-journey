#include <stdio.h>

void aumentarVida(int* vida);

int main(void)
{
    int vida = 200;

    printf("Vida inicial: %d\n", vida);

    aumentarVida(&vida);

    printf("Curacion realizada. Vida actual: %d\n", vida);

    return 0;
}

void aumentarVida(int* vida)
{
    *vida += 100;
}