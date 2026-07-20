#include <stdio.h>
#include <string.h>
#include "personaje.h"
#include "combate.h"

int main(void)
{
	Personaje Heroe;
	inicializarPersonaje(&Heroe, "Cloud", 100, 25, Guerrero);

	Personaje goblin;
	inicializarPersonaje(&goblin, "Goblin Verde", 50, 10, Arquero);
	Personaje Jefe;
	inicializarPersonaje(&Jefe, "Rey arruinado", 5000, 300, Guerrero);
	Personaje equipo[4];
	inicializarPersonaje(&equipo[0], "Cloud", 100, 25, Guerrero);
	inicializarPersonaje(&equipo[1], "Tifa", 90, 20, Ladron);
	inicializarPersonaje(&equipo[2], "Barret", 125, 30, Guerrero);
	inicializarPersonaje(&equipo[3], "Aerith",80 , 15, Mago);
	int tamanio = sizeof(equipo) / sizeof(equipo[0]);

	mostrarEquipo(&equipo, tamanio);
		
	mostrarPersonaje(&goblin);
	mostrarPersonaje(&Heroe);
	mostrarPersonaje(&Jefe);

	ejecutarCombate(&Heroe, &goblin);



	return 0;
}
