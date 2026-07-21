#include <stdio.h>
#include "personaje.h"
#include "combate.h"


void iniciarCombate(const Personaje* jugador, const Personaje* enemigo)
{
	printf("%s contra %s\n", jugador->nombre, enemigo->nombre);

	printf("Comienza un combate\n");

}

void mostrarMenuCombate(void)
{
	printf("1.- Atacar\n");
	printf("2.- Defender\n");
	printf("3.- Huir\n");

}

void finalizarCombate(void)
{
	printf("Finalizo el combate\n");
}

Comando leerAccion(void)
{
	Comando comando;
	scanf_s("%d", &comando);
	return comando;

}


void ejecutarComandoCombate(Comando accion, Personaje* atacante, Personaje* defensor)
{
	switch (accion)
	{
	case Atacar:
		ataque(atacante, defensor);
		break;
	case Defender:
		defendiendo(atacante);
		break;
	case Huir:
		mensajeDeHuida();
		break;
	default:
		printf("Comando no valido\n");
		break;
	}
	
}

void ataque(Personaje* atacante, Personaje* defensor)
{
	int danio = calculoDanio(atacante);
	defensor->vida -= danio;
	
}
void defendiendo(Personaje* personaje)
{
	printf("%s se pone en posicion defensiva.\n", personaje->nombre);
}
void mensajeDeHuida(void)
{
	printf("Has huido del combate\n");
}


int calculoDanio(Personaje* atacante)
{
	return atacante->ataque;
}

void ejecutarCombate(Personaje* atacante, Personaje* defensor)
{
	Comando comando;
	iniciarCombate(atacante, defensor);
	while (atacante->vida > 0 &&
		defensor->vida > 0)
	{
		mostrarMenuCombate();
		comando = leerAccion();
		if (comando == Huir)
		{
			break;
		}
		ejecutarComandoCombate(comando, atacante, defensor);

	}
	finalizarCombate();
}
void iniciarCombateEquipos(void)
{
	printf("Aparecio un grupo de enemigos");

	printf("Comienza un combate\n");

}

void ejecutarTurnoEquipo(Personaje* equipo, Personaje* Enemigos, int tamanio)
{

	Comando accion;
	for (int i = 0; i < tamanio; i++)
	{

		if (equipo[i].vida <= 0)
		{
			continue;
		}
		Personaje* objetivo = obtenerPrimerPersonajeVivo(Enemigos, tamanio);
		if (objetivo == NULL)
		{
			break;
		}
		mostrarMenuCombate();
		accion = leerAccion();
		ejecutarComandoCombate(accion, &equipo[i], objetivo);
		
	}


}
void ejecutarTurnoEnemigo(Personaje* Enemigos, Personaje* equipo, int tamanio)
{
	for (int i = 0; i < tamanio; i++)
	{
		if (Enemigos[i].vida <= 0)
		{
			continue;
		}
		Personaje* objetivo = obtenerPrimerPersonajeVivo(equipo, tamanio);
		if (objetivo == NULL)
		{
			break;
		}
		ejecutarComandoCombate(Atacar, &Enemigos[i], objetivo);
	}
}
void ejecutarCombateEquipos(Personaje* equipo, Personaje* Enemigos, int tamanio)
{
	iniciarCombateEquipos();
	while (hayPersonajesVivos(equipo, tamanio) && hayPersonajesVivos(Enemigos, tamanio))
	{
		ejecutarTurnoEquipo(equipo, Enemigos, tamanio);	
		ejecutarTurnoEnemigo(Enemigos, equipo, tamanio);	
	}
	finalizarCombate();
}