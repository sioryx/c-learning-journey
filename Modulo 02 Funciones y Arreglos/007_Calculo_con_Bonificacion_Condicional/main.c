#include <stdio.h>

int calcularPuntaje(int enemigos, int puntos);

int main() {

	int enemigos;
	int puntos;
	
	printf("Ingrese la cantidad de enemigos derrotados:\n");
	scanf_s("%d", &enemigos);
	printf("Ingrese la cantidad de puntos por enemigo:\n");
	scanf_s("%d", &puntos);
	printf("Enemigos derrotados: %d\n", enemigos);
	printf("Puntos por enemigo: %d\n", puntos);
	printf("Puntuacion total %d", calcularPuntaje(enemigos, puntos));

}

int calcularPuntaje(int enemigos, int puntos) {
	int puntaje = enemigos * puntos;
	if (enemigos >= 10) {
		puntaje += 1000;

	}
	return puntaje;
}