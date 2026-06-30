#include <stdio.h>

void recargarMunicion(int cargadores[], int tamanio);

int main() {
	int cargadores[5] = { 10,15,12,18,5 };
	int tamanio = sizeof(cargadores) / sizeof(cargadores[0]);

	printf("Estado actual de cargadores :\n");
	
	for (int i = 0; i < tamanio; i++) {
		printf("Cargador %d : %d\n", i + 1, cargadores[i]);
	}
	printf("\nRecargando...\n");
// Recarga todos los cargadores hasta su capacidad máxima.
	recargarMunicion(cargadores, tamanio);

	printf("Estado actual de cargadores :\n");

	for (int i = 0; i < tamanio; i++) {
		printf("Cargador %d : %d\n", i + 1, cargadores[i]);
	}
	return 0;
}

void recargarMunicion(int cargadores[], int tamanio) {

	for (int i = 0; i < tamanio; i++) {
// Restablece a 30 la munición de los cargadores que no están completos.
		if (cargadores[i] < 30) {
			cargadores[i] = 30;
		}
	}
}
