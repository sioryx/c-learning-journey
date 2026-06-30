#include <stdio.h>

void calcularBotin(int enemigos, int* oro, int* gemas);

int main(void)
{
    int enemigos = 8;
    int oro = 0;
    int gemas = 0;

    calcularBotin(enemigos, &oro, &gemas);

    printf("Botin obtenido:\n");
    printf("Oro: %d\n", oro);
    printf("Gemas: %d\n", gemas);

    return 0;
}

void calcularBotin(int enemigos, int* oro, int* gemas)
{
    *oro = enemigos * 25;
    *gemas = enemigos / 3;
}