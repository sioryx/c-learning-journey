#include "personaje.h"
#include <stdio.h>

void mostrarPersonaje(Personaje* personaje)
{

	printf("Nombre : %s\n", personaje->nombre);
	printf("Vida : %d\n", personaje->vida);
	printf("Ataque : %d\n", personaje->ataque);
	printf("Clase : %s\n",
		obtenerNombreClase(personaje->clase));
}
void inicializarPersonaje(Personaje* personaje, const char* nombre, int vida, int ataque, Clase clase)
{

	strcpy_s(personaje->nombre, sizeof(personaje->nombre), nombre);
	personaje->vida = vida;
	personaje->ataque = ataque;
	personaje->clase = clase;

}
const char* obtenerNombreClase(Clase clase)
{
	switch (clase)
	{
	case Guerrero:
		return "Guerrero";

	case Mago:
		return "Mago";
	case Arquero:
		return "Arquero";
	case Ladron:
		return "Ladron";
	default:
		return "Clase desconocida";
	}
}