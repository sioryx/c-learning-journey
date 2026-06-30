#include <stdio.h>

int sumarMonedas(int* monedas, int tamanio);

int main(void)
{
    int monedas[5] = { 10, 20, 30, 40, 50 };
    int tamanio = sizeof(monedas) / sizeof(monedas[0]);

    printf("Monedas actuales:\n");

    for (int i = 0; i < tamanio; i++)
    {
        printf("%d\n", monedas[i]);
    }

    printf("Monedas totales: %d\n", sumarMonedas(monedas, tamanio));

    return 0;
}

int sumarMonedas(int* monedas, int tamanio)
{
    int suma = 0;

    for (int i = 0; i < tamanio; i++)
    {
        suma += *(monedas + i);
    }

    return suma;
}