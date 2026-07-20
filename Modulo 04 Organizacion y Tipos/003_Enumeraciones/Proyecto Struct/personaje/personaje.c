#include "personaje.h"
#include <stdio.h>

void mostrarPersonaje(Personaje* personaje)
{

	printf("%s\n", personaje->nombre);
	printf("%d\n", personaje->vida);
	printf("%d\n", personaje->ataque);
	printf("%d\n", personaje->clase);
}
void inicializarPersonaje(Personaje* personaje, const char* nombre, int vida, int ataque, Clase clase)
{

	strcpy_s(personaje->nombre, sizeof(personaje->nombre), nombre);
	personaje->vida = vida;
	personaje->ataque = ataque;
	personaje->clase = clase;

}
