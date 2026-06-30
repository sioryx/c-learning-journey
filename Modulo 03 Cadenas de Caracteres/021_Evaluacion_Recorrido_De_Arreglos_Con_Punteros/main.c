#include <stdio.h>

int main(void)
{
    int niveles[5] = { 10, 20, 30, 40, 50 };
    int tamanio = sizeof(niveles) / sizeof(niveles[0]);
    int* ptrNiveles = niveles;

    while (tamanio > 0)
    {
        printf("Nivel: %d\n", *ptrNiveles);

        ptrNiveles++;
        tamanio--;
    }

    return 0;
}