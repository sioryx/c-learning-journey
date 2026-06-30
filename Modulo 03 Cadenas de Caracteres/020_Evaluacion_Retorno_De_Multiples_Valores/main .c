#include <stdio.h>

void calcularBotin(int enemigos, int* oro, int* exp);
void estado(int oro, int exp);

int main(void)
{
    int enemigos = 20;
    int oro = 0;
    int exp = 0;

    printf("Estado inicial:\n");
    estado(oro, exp);

    printf("\nHas derrotado a %d enemigos.\n", enemigos);
    printf("Estas son tus recompensas.\n");

    calcularBotin(enemigos, &oro, &exp);

    printf("\nEstado final:\n");
    estado(oro, exp);

    return 0;
}

void estado(int oro, int exp)
{
    printf("Oro total: %d\n", oro);
    printf("Experiencia total: %d\n", exp);
}

void calcularBotin(int enemigos, int* oro, int* exp)
{
    *oro = enemigos * 20;
    *exp = enemigos * 150;
}