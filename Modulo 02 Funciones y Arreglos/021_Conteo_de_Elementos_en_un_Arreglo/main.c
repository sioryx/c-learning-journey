#include <stdio.h>

int main(void) {

    int enemigos[8] = { 100, 50, 87, 250, 600, 25, 95, 10 };
    int contador = 0;

    for (int i = 0; i < 8; i++) {

        // Cuenta cuántos enemigos tienen 100 o más puntos de vida.
        if (enemigos[i] >= 100) {
            contador++;
        }
    }

    printf("Enemigos elite con 100 o mas puntos de vida derrotados: %d\n", contador);

    return 0;
}