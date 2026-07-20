#include <stdio.h>
#include "personaje.h"


void mostrarEquipo(Personaje* equipo, int tamanio)
{
	for (int i = 0; i < tamanio; i++)
	{
		mostrarPersonaje(&equipo[i]);
	}
}
