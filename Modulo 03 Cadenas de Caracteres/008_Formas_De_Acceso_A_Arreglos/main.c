#include <stdio.h>

int main(void)
{
    int mana[5] = { 50, 60, 70, 80, 90 };
    int* ptrMana = mana;

    int tamanio = sizeof(mana) / sizeof(mana[0]);

    printf("Acceso mediante el arreglo:\n");
    for (int i = 0; i < tamanio; i++)
    {
        printf("%d\n", mana[i]);
    }

    printf("\nAcceso mediante aritmetica de punteros:\n");
    for (int i = 0; i < tamanio; i++)
    {
        printf("%d\n", *(ptrMana + i));
    }

    printf("\nAcceso mediante indices sobre el puntero:\n");
    for (int i = 0; i < tamanio; i++)
    {
        printf("%d\n", ptrMana[i]);
    }

    return 0;
}