#include <stdio.h>

int calcularEnergiaRestante(int energiaActual, int energiaConsumida);


int main() {

	int energiaActual = 100;
	int energiaConsumida;
	/*Teoricamente el juego establece la energia maxima dependiendo
	de la etapa en un juego, por ende la establecemos en 100.
	tecnicament el juego nunca le pregunta al usuario cuanta energia tiene :p
	pero como es una practica podemos solicitarlo tambien com el printf y scanf respectivos*/
	printf("Ingrese el coste energia de la accion\n");
	scanf_s("%d", &energiaConsumida);
	
	int energiaRestante = calcularEnergiaRestante(energiaActual, energiaConsumida);
	if (energiaRestante == 0 && energiaConsumida > energiaActual) {
		printf("No tienes energia suficiente para realizar esta accion\n");
	}
	if (energiaRestante == 0) {
		printf("Energia agotada\n");
	}
	
	
	else {
		printf("Energia restante: %d\n",energiaRestante);
	}
	return 0;
}


int calcularEnergiaRestante(int energiaActual, int energiaConsumida) {
	int energiaRestante;
	energiaRestante = energiaActual - energiaConsumida;
	if (energiaRestante < 0) {
		return 0;
	}
	
	return energiaRestante;
}
