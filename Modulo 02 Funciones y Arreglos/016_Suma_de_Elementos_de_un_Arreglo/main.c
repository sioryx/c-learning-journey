#include <stdio.h>

int main(void) {

	int puntuaciones[5];
	int contador = 0;
	int suma = 0; // Acumula la suma de todas las puntuaciones ingresadas.
	while (contador < 5) {
		printf("Ingrese sus puntuaciones:\n");
		
		scanf_s("%d", &puntuaciones[contador]);
		contador++;
	}
	for (int i = 0; i < 5; i++) {
		printf("Partida %d: %d puntos\n", i + 1, puntuaciones[i]);
		suma = suma + puntuaciones[i]; 
		// Acumula cada puntuación para obtener el total al finalizar el recorrido.
		}
	
	printf("Puntos totales: %d puntos\n", suma);
	return 0;
}