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
	mostrarPersonaje(&goblin);
	mostrarPersonaje(&Heroe);
	mostrarPersonaje(&Jefe);
	
	ejecutarCombate(&Heroe, &goblin);



	return 0;
}
