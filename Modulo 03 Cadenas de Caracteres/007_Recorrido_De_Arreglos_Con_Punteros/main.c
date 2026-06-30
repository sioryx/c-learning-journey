#include <stdio.h>

int main(void)
{
    int mana[5] = { 50, 60, 70, 80, 90 };
    int* ptrMana = mana;

    int tamanio = sizeof(mana) / sizeof(mana[0]);

    for (int i = 0; i < tamanio; i++)
    {
        printf("Mana inicial: %d\n", *(ptrMana + i));
    }

    for (int i = 0; i < tamanio; i++)
    {
        *(ptrMana + i) += 10;
    }

    for (int i = 0; i < tamanio; i++)
    {
        printf("Mana actualizado: %d\n", *(ptrMana + i));
    }

    return 0;
}
