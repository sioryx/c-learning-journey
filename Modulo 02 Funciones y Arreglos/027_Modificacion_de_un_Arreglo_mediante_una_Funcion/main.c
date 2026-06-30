#include <stdio.h>

void aumentarAtaque(int ataque[], int tamanio);

int main(void) {
	int ataque[8] = { 10,12,13,15,18,20,22,25 };
	int tamanio = sizeof(ataque) / sizeof(ataque[0]);

	printf("Este es tu escala de ataque de los proximos 8 niveles:\n");
	for (int i = 0; i < tamanio; i++) {

		printf("Nivel %d = %d \n", i + 1, ataque[i]);
/*
 * Muestra los valores originales del arreglo antes de aplicar la mejora.
 * El mismo recorrido se utiliza nuevamente para visualizar los cambios
 * realizados por la función.
 */
	printf("\nCon la mejora aplicada, la escala de ataque queda de la siguiente manera:\n");

	aumentarAtaque(ataque, tamanio);
	
	printf("Este es tu escala de ataque de los proximos 8 niveles:\n");
	for (int i = 0; i < tamanio; i++) {

		printf("Nivel %d = %d \n", i + 1, ataque[i]);
	}
	return 0;
}

void aumentarAtaque(int ataque[], int tamanio) {
	// Incrementa en 5 puntos el ataque de cada nivel.
	for (int i = 0; i < tamanio; i++) {
		ataque[i] += 5;
		}
	
}