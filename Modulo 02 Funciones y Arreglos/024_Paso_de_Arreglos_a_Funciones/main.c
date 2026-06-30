#include <stdio.h>

void mostrarMonedas(int monedas[], int tamanio);

int main(void) {

    int monedas[5] = { 1, 2, 3, 4, 5 };
    int tamanio = sizeof(monedas) / sizeof(monedas[0]);

    printf("Mostrando monedas:\n");

    // Envía el arreglo y su tamaño a la función para mostrar su contenido.
    mostrarMonedas(monedas, tamanio);

    return 0;
}

void mostrarMonedas(int monedas[], int tamanio) {

    // Recorre el arreglo recibido e imprime cada uno de sus elementos.
    for (int i = 0; i < tamanio; i++) {
        printf("%d ", monedas[i]);
    }

    printf("\n");
}