#include <stdio.h>

int main(void) {

    int niveles[10] = { 1,2,3,4,5,6,7,8,9,10 };

    for (int i = 0; i < 10; i++) {

        // Muestra únicamente los niveles cuyo valor es un número par.
        if (niveles[i] % 2 == 0) {
            printf("Nivel %d\n", niveles[i]);
        }
    }

    return 0;
}