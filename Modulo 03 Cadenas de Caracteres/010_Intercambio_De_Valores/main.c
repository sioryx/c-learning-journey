#include <stdio.h>

void intercambiar(int* a, int* b);

int main(void)
{
    int vida = 100;
    int mana = 50;

    printf("Vida inicial: %d\n", vida);
    printf("Mana inicial: %d\n", mana);

    intercambiar(&vida, &mana);

    printf("\nDespues del intercambio:\n");
    printf("Vida: %d\n", vida);
    printf("Mana: %d\n", mana);

    return 0;
}

void intercambiar(int* a, int* b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}