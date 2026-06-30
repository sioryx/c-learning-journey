#include <stdio.h>

int calcularExperiencia(int expActual, int expGanada);

int main() {
	int expActual;
	int expGanada;
	printf("Ingrese su experiencia actual\n");
	scanf_s("%d", &expActual);
	printf("Ingrese la experiencia por mision\n");
	scanf_s("%d", &expGanada);
	printf("Su experiencia total es %d\n", calcularExperiencia(expActual, expGanada));
	return 0;

}

int calcularExperiencia(int expActual, int expGanada) {
	return expActual + expGanada;
}

