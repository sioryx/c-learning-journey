#include <stdio.h>
#include <string.h>
#include "personaje.h"


int main(void)
{
	Personaje Heroe;
	inicializarPersonaje(&Heroe, "Cloud", 100, 25);
	
	Personaje goblin;
	inicializarPersonaje(&goblin, "Goblin Verde", 50, 10);
	Personaje Jefe;
	inicializarPersonaje(&Jefe, "Rey arruinado", 5000, 300);
	mostrarPersonaje(&goblin);
	mostrarPersonaje(&Heroe);
	mostrarPersonaje(&Jefe);


	return 0;
}

