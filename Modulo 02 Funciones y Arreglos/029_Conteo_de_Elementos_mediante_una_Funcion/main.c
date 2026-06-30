#include <stdio.h>

int contarPociones(int inventario[], int tamanio);

int main() {

	int inventario[5] = { 4,2,0,3,0 };
	int tamanio = sizeof(inventario) / sizeof(inventario[0]);

	printf("Espacios ocupados del inventario: %d\n", contarPociones(inventario, tamanio));

	return 0;
}

int contarPociones(int inventario[], int tamanio) {
	int contador = 0;
	for (int i = 0; i < tamanio; i++) {
// Cuenta únicamente los espacios del inventario que contienen pociones.
		if (inventario[i] > 0) {

			contador++;
		}
	}
	return contador;
}