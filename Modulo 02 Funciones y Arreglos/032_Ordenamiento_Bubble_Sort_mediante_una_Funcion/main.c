#include <stdio.h>
void ordenarPuntuaciones(int puntuaciones[], int tamanio);

int main() {
	int puntuaciones[10] = { 100,1,90,25,45,12,2,35,87,54 };
	int tamanio = sizeof(puntuaciones) / sizeof(puntuaciones[0]);

	printf("Ultimas puntuaciones:\n");

	for (int i = 0; i < tamanio; i++) {

		printf("%d\n", puntuaciones[i]);
	}
	printf("\nOrdenando de la peor a la mejor...\n");
	ordenarPuntuaciones(puntuaciones, tamanio);

	for (int i = 0; i < tamanio; i++) {

		printf("%d\n", puntuaciones[i]);
	}
	
	return 0;
}

void ordenarPuntuaciones(int puntuaciones[], int tamanio) {
	int temp = 0;
	for (int i = 0; i < tamanio; i++) {
		// Ordena el arreglo utilizando el algoritmo Bubble Sort.
		for (int j = 0; j < tamanio - i - 1; j++) {
			/*
 * tamanio: número total de elementos.
 * i: cantidad de elementos ya ordenados al final del arreglo.
 * -1: evita acceder fuera de los límites al comparar j con j + 1.
 */
			if (puntuaciones[j] > puntuaciones[j + 1]){
				temp = puntuaciones[j];
				puntuaciones[j] = puntuaciones[j + 1];
				puntuaciones[j + 1] = temp;

			}
		}
	}
}