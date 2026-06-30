#include <stdio.h>

int sumarExperiencia(int expAcumulada[], int tamanio);

int main() {

	int expAcumulada[8] = { 20,50,30,20,30,50,500,10 };
	int tamanio = sizeof(expAcumulada) / sizeof (expAcumulada[0]);

	printf("Experiencia obtenida tras derrotar  a %d enemigos\n", tamanio);

	for (int i = 0; i < tamanio; i++) {

		printf("Enemigo %d = %d \n", i + 1, expAcumulada[i]);

		
	}

	// Calcula la experiencia total sumando todos los elementos del arreglo.
	printf("Experiencia total obtenida: %d\n", sumarExperiencia(expAcumulada, tamanio));
	return 0;
}

int sumarExperiencia(int expAcumulada[], int tamanio) {
	int suma = 0;
// Recorre el arreglo acumulando la experiencia obtenida.
	for (int i = 0; i < tamanio; i++) {
	
		suma += expAcumulada[i];
	}
	return suma;
}



