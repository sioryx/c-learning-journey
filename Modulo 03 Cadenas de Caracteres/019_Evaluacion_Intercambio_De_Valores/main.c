#include <stdio.h>

void intercambiar(int* oro, int* gemas);
void mostrarInventario(int oro, int gemas);

int main(void)
{
    int oro = 15;
    int gemas = 23;

    mostrarInventario(oro, gemas);

    intercambiar(&oro, &gemas);

    printf("\nLos valores han sido intercambiados.\n");
    mostrarInventario(oro, gemas);

    return 0;
}

void mostrarInventario(int oro, int gemas)
{
    printf("Oro = %d\n", oro);
    printf("Gemas = %d\n", gemas);
}

void intercambiar(int* oro, int* gemas)
{
    int temp = *oro;

    *oro = *gemas;
    *gemas = temp;
}