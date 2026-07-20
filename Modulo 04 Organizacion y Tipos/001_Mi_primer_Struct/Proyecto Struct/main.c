#include <stdio.h>
#include <string.h>
#include "personaje.h"


int main(void)
{
	struct Personaje Heroe;
	inicializarPersonaje(&Heroe, "Cloud", 100, 25);
	
	struct Personaje goblin;
	inicializarPersonaje(&goblin, "Goblin Verde", 50, 10);
	struct Personaje Jefe;
	inicializarPersonaje(&Jefe, "Rey arruinado", 5000, 300);
	mostrarPersonaje(&goblin);
	mostrarPersonaje(&Heroe);
	mostrarPersonaje(&Jefe);


	return 0;
}

