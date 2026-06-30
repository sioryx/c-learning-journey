#include <stdio.h>

int main(void) {

    int inventario[5] = { 1, 2, 3, 4, 5 };
    int espacioUsuario = 0;
    int espacioReal = 0;
    int nuevoValor = 0;

    for (int i = 0; i < 5; i++) {
        printf("Inventario %d: %d\n", i + 1, inventario[i]);
    }

    /*
     * El usuario selecciona posiciones del 1 al 5 para hacer la interacción
     * más intuitiva. Internamente se convierte a un índice del 0 al 4,
     * que es la forma en que C almacena los arreglos.
     */
    printf("¿A qué espacio desea acceder? (1 al 5)\n");
    scanf_s("%d", &espacioUsuario);

    while (espacioUsuario < 1 || espacioUsuario > 5) {
        printf("Espacio no disponible. Intente de nuevo (1 al 5).\n");
        scanf_s("%d", &espacioUsuario);
    }

    espacioReal = espacioUsuario - 1;

    printf("Ingrese el nuevo valor:\n");
    scanf_s("%d", &nuevoValor);

    inventario[espacioReal] = nuevoValor;

    printf("Inventario actualizado correctamente.\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Inventario %d: %d\n", i + 1, inventario[i]);
    }

    return 0;
}