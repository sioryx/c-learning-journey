#include <stdio.h>

int buscarObjeto(int inventario[], int tamanio, int objetoBuscado);

int main(void) {

    int inventario[5] = { 10, 30, 20, 40, 50 };
    int tamanio = sizeof(inventario) / sizeof(inventario[0]);
    int objetoBuscado = 0;

    printf("Ingrese el ID del objeto deseado:\n");
    scanf_s("%d", &objetoBuscado);

    int posicion = buscarObjeto(inventario, tamanio, objetoBuscado);

    if (posicion == -1) {
        printf("Objeto no encontrado.\n");
    } else {
        printf("Objeto encontrado en la posicion %d.\n", posicion);
    }

    return 0;
}

int buscarObjeto(int inventario[], int tamanio, int objetoBuscado) {

    // Recorre el inventario hasta encontrar el objeto solicitado.
    for (int i = 0; i < tamanio; i++) {

        if (objetoBuscado == inventario[i]) {
            return i + 1;
        }
    }

    return -1;
}