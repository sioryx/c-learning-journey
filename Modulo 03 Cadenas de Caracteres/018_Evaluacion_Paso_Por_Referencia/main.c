#include <stdio.h>

void curar(int* vida);

int main() {

	int vida = 125;

	printf("Salud actual %d\n", vida);
	printf("Usando pocion...\n");

	curar(&vida);

	printf("Se restauraron 75 puntos de vida\n");
	printf("Salud actual % d\n", vida);

	return 0;
}

void curar(int *vida) {

	*vida += 75;
}