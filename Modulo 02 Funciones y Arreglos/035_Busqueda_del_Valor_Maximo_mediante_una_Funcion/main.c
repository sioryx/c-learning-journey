#include <stdio.h>

int obtenerMayorPuntaje(int puntuaciones[], int tamanio);

int main(void) {

    int puntuaciones[8] = { 1000, 1200, 1100, 1500, 2500, 5000, 1300, 2000 };
    int tamanio = sizeof(puntuaciones) / sizeof(puntuaciones[0]);

    printf("La puntuacion mas alta obtenida es %d\n",
           obtenerMayorPuntaje(puntuaciones, tamanio));

    return 0;
}

int obtenerMayorPuntaje(int puntuaciones[], int tamanio) {

    // Inicializa el valor máximo con el primer elemento del arreglo.
    int puntaje = puntuaciones[0];

    for (int i = 1; i < tamanio; i++) {

        // Actualiza el valor máximo cuando encuentra una puntuación mayor.
        if (puntuaciones[i] > puntaje) {
            puntaje = puntuaciones[i];
        }
    }

    return puntaje;
}