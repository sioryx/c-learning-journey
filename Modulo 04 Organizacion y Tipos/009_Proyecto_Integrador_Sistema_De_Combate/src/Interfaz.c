#include <stdio.h>
#include "personaje.h"
#include "equipo.h"
#include "combate.h"

void mostrarAtaque(Personaje* atacante, Personaje* enemigo)
{
	printf("%s ataca a %s\n", atacante->nombre, enemigo->nombre);
}

void mostrarDanio(Personaje* enemigo, int danio)
{
	printf("%s recibio %d de danio\n", enemigo->nombre, danio);
}

void mostrarEstado(Personaje* personaje)
{
	printf("%s HP: %d\n",
		personaje->nombre,
		personaje->vida);
}

void mostrarEstadoEquipo(Personaje* equipo, int tamanio)
{
	for (int i = 0; i < tamanio; i++)
	{
		mostrarEstado(&equipo[i]);
	}
}



void  mostrarVictoria(void)
{
	printf("\n======VICTORIA======\n");
}

void mostrarDerrota(void)
{
	printf("\n========DERROTA=======\n");
}

void turnoJugador(void)
{
	printf("==================\n");
	printf("TURNO DEL JUGADOR\n");
	printf("==================\n");
}
void turnoEnemigo(void)
{
	printf("==================\n");
	printf("TURNO ENEMIGO\n");
	printf("==================\n");
}

void mostrarTituloEquipo(void)
{
	printf("======= EQUIPO ========\n");

}
void mostrarTituloEnemigo(void)
{
	printf("======= ENEMIGOS ========\n");

}