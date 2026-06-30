#include <stdio.h>

int sumarMonedas(int monedas[], int tamanio);

int main(void) {
	
	int monedas[10] = { 10,25,10,15,8,5,10,15,20,12 };
	int tamanio = sizeof(monedas) / sizeof(monedas[0]);

	printf("Monedas acumuladas : %d\n", sumarMonedas(monedas, tamanio));


	return 0;
}

int sumarMonedas(int monedas[], int tamanio) {
	int suma = 0;
// Recorre el arreglo acumulando el total de monedas.
	for (int i = 0; i < tamanio; i++) {
		suma += monedas[i];
		
	}
	return suma;
}
