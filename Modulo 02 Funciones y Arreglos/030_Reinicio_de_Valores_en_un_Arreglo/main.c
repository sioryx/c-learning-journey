#include <stdio.h>

void reiniciarEnergia(int energia[], int tamanio);

int main(void) {

	int energia[6] = { 50,15,35,45,61,24 };
	int tamanio = sizeof(energia) / sizeof(energia[0]);
	/*
 * Se utiliza un arreglo para representar el nivel de energía
 * de varios motores antes del proceso de reabastecimiento.
 */
	printf("El estado actual de la energia en cada motor es: \n");

	for (int i = 0; i < tamanio; i++) {
		printf("Motor %d = %d\n", i + 1, energia[i]);
	}
	printf("Reabasteciendo...\n");
// Restablece la energía de todos los motores al valor máximo.
	reiniciarEnergia(energia, tamanio);
	for (int i = 0; i < tamanio; i++) {
		printf("Motor %d = %d\n", i + 1, energia[i]);
	}
	printf("\n¡¡¡Energia reabastecida con exito!!!\n");
	return 0;
}

void reiniciarEnergia(int energia[], int tamanio) {
	// Asigna el valor máximo de energía a cada elemento del arreglo.
	for (int i = 0; i < tamanio; i++) {
		energia[i] = 100;
	}

}