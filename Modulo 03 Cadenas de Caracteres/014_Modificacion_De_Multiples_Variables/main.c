#include <stdio.h>

void subirNivel(int* vida, int* ataque, int* defensa);

int main(void)
{
    int vida = 200;
    int ataque = 30;
    int defensa = 15;

    printf("Estado actual:\n");
    printf("Vida: %d\n", vida);
    printf("Ataque: %d\n", ataque);
    printf("Defensa: %d\n", defensa);

    subirNivel(&vida, &ataque, &defensa);

    printf("\nEstado despues de subir de nivel:\n");
    printf("Vida: %d\n", vida);
    printf("Ataque: %d\n", ataque);
    printf("Defensa: %d\n", defensa);

    return 0;
}

void subirNivel(int* vida, int* ataque, int* defensa)
{
    *vida += 50;
    *ataque += 10;
    *defensa += 5;
}