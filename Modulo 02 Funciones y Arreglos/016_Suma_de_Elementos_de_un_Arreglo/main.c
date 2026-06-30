#include <stdio.h>

int main(void) {

	int puntuaciones[5];
	int contador = 0;
	int suma = 0; //Se declara la variable suma para almacenar los ciclos del for
	while (contador < 5) {
		printf("Ingrese sus puntuaciones:\n");
		
		scanf_s("%d", &puntuaciones[contador]);
		contador++;
	}
	for (int i = 0; i < 5; i++) {
		printf("Partida %d: %d puntos\n", i + 1, puntuaciones[i]);
		suma = suma + puntuaciones[i]; 
		//Aqui se ejecuta cada cilo y se va añadiendo a la variable
		}
	
	printf("Puntos totales: %d puntos\n", suma);
	return 0;
}