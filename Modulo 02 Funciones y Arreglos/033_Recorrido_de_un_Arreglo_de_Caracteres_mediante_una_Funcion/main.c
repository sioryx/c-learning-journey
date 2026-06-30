#include <stdio.h>

void mostrarIniciales(char jefes[], int tamanio);

int main() {
	char jefes[5] = { 'M','G','O','D','Y' };
	int tamanio = sizeof(jefes) / sizeof(jefes[0]);

	printf("Lista de iniciales de jefes por descubrir:\n");
// Muestra todas las iniciales almacenadas en el arreglo.
	mostrarIniciales(jefes, tamanio);

	return 0;
}

void mostrarIniciales(char jefes[], int tamanio) {
// Recorre el arreglo para mostrar la inicial de cada jefe.
	for (int i = 0; i < tamanio; i++) {

		printf("Jefe %d: %c\n", i + 1, jefes[i]);
	}
}