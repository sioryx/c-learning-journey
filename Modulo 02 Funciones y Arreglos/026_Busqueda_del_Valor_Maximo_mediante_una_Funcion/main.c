#include <stdio.h>

int obtenerVidaMax(int vida[], int tamanio);


int main(void) {
	
	int vida[6] = { 100,50,60,80,120,101 };
	int tamanio = sizeof(vida) / sizeof(vida[0]);
	printf("Vida maxima alcanzada: %d\n", obtenerVidaMax(vida, tamanio));
		return 0;
	}
int obtenerVidaMax(int vida[], int tamanio) {
// Inicializa el valor máximo con el primer elemento del arreglo.
// Esto permite que el algoritmo funcione correctamente incluso si todos los valores son negativos.

	int vidaMax = vida[0]; //Esto nos ayuda a que la vida no este por debajo de 0.
	//O en su defecto escoger el numero mas alto de un arreglo negativo
	for (int i = 1; i < tamanio; i++) {
// Actualiza el valor máximo cuando encuentra uno mayor.
		if (vida[i] > vidaMax) {
			vidaMax = vida[i];
		}
		
		}
	return vidaMax;
}