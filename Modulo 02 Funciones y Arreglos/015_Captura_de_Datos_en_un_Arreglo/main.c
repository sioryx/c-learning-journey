#include <stdio.h>

int main() {
	int municion[6] = {};
	int contador = 0;
	while (contador < 6) {
		printf("Por favor ingrese la cantidad de municion del cargador\n");
		scanf_s("%d", &municion[contador]); 
		// Se utiliza el índice 'contador' para acceder a una posición válida del arreglo.
		// Acceder a municion[6] provocaría un error porque el arreglo tiene índices de 0 a 5.
		contador++;
	}
	for (int i = 0; i < 6; i++) {

		printf("Municion del cargador %d: %d balas\n", i + 1, municion[i]);
		
	}
	return 0;
}