#include <stdio.h>

int main(void) {

    char jefesFinales[5] = { 'M', 'R', 'G', 'O', 'B' };

    // Recorre el arreglo para mostrar el identificador de cada jefe final.
    for (int i = 0; i < 5; i++) {
        printf("Jefe %d: %c\n", i + 1, jefesFinales[i]);
    }

    return 0;
}