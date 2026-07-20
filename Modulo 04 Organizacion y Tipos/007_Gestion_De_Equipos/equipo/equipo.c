#include <stdio.h>
#include "personaje.h"


void mostrarEquipo(Personaje* equipo, int tamanio)
{
	for (int i = 0; i < tamanio; i++)
	{
		mostrarPersonaje(&equipo[i]);
	}
}

int hayPersonajesVivos(Personaje* equipo, int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        if (equipo[i].vida > 0)
        {
            return 1;
        }
    }

    return 0;
}
int contarPersonajesVivos(Personaje* equipo, int cantidad)
{
	int contador = 0;
	for (int i = 0; i < cantidad; i++)
	{
		if (equipo[i].vida > 0)
		{
			contador++;
		}
	}

	return contador;
}
Personaje* obtenerPersonaje(Personaje equipo[], int cantidad, int indice)
{
	if (indice < 0 || indice >= cantidad)
	{
		return NULL;
	}
	return &equipo[indice];
}