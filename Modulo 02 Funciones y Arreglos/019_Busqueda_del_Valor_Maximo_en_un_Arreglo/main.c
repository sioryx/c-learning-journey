#include <stdio.h>

int main(void) {

    int energia[7] = { 45, 15, 24, 78, 56, 98, 24 };
    int energiaMaxima = energia[0];

    // Busca el valor más alto almacenado en el arreglo.
    for (int i = 1; i < 7; i++) {

        if (energiaMaxima < energia[i]) {
            energiaMaxima = energia[i];
        }
    }

    printf("La energía más alta registrada es %d\n", energiaMaxima);

    return 0;
}