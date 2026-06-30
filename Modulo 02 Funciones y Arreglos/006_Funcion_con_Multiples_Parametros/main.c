#include <stdio.h>

void mostrarEstadisticas(int vida, int ataque, int defensa);

int main(void) {
	int vida;
	int ataque;
	int defensa;
	printf("Ingrese su vida maxima:\n");
	scanf_s("%d", &vida);
	printf("Ingrese su ataque:\n");
	scanf_s("%d", &ataque);
	printf("Ingrese su defensa:\n");
	scanf_s("%d", &defensa);
	mostrarEstadisticas(vida, ataque, defensa);
	return 0;
}
void mostrarEstadisticas(int vida, int ataque, int defensa) {

	printf("Vida maxima: %d\n", vida);
	printf("Ataque: %d\n", ataque);
	printf("Defensa: %d\n", defensa);
	
}
