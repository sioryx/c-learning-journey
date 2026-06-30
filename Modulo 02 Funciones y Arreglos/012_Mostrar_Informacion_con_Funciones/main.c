#include <stdio.h>

void mostrarPersonaje(int vida, int mana, int nivel);

int main(void) {
	int vida = 1500;
	int mana = 2500;
	int nivel = 50;
	printf("Estas son las estadisticas de tu personaje:\n");
	mostrarPersonaje(vida, mana, nivel);
	return 0;
}

void mostrarPersonaje(int vida, int mana, int nivel) {
	
	printf("======Personaje: Sioryx=====\n");
	printf("Vida maxima: %d\n", vida);
	printf("Mana maximo: %d\n", mana);
	printf("Nivel: %d\n", nivel);

}