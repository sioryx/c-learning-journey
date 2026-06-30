#include <stdio.h>

void mostrarInventario(int* inventario, int tamanio);

int main(void)
{
    int inventario[6] = { 1, 2, 3, 4, 5, 6 };
    int tamanio = sizeof(inventario) / sizeof(inventario[0]);

    mostrarInventario(inventario, tamanio);

    return 0;
}

void mostrarInventario(int* inventario, int tamanio)
{
    while (tamanio > 0)
    {
        printf("Inventario: %d\n", *inventario);

        inventario++;
        tamanio--;
    }
}