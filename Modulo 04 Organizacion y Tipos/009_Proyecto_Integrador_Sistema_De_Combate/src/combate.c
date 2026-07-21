#include <stdio.h>
#include "personaje.h"
#include "combate.h"
#include "Interfaz.h"

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


ResultadoTurno ejecutarComandoCombate(Comando accion, Personaje* atacante, Personaje* defensor)
{
	switch (accion)
	{
	case Atacar:
		ataque(atacante, defensor);
		mostrarAtaque(atacante, defensor);
		mostrarDanio(defensor, calculoDanio(atacante));
		mostrarEstado(defensor);
		return Continuar;
	case Defender:
		defendiendo(atacante);
		return Continuar;
	case Huir:
		return Huyendo;
	default:
		printf("Comando no valido\n");
		return Continuar;
	}

}

void ataque(Personaje* atacante, Personaje* defensor)
{
	int danio = calculoDanio(atacante);
	defensor->vida -= danio;
	if (defensor->vida < 0)
	{
		defensor->vida = 0;
	}

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
	printf("Aparecio un grupo de enemigos\n");

	printf("Comienza un combate\n");

}

ResultadoTurno ejecutarTurnoEquipo(Personaje* equipo, Personaje* Enemigos, int tamanio)
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
		turnoJugador();
		mostrarMenuCombate();
		accion = leerAccion();
		ResultadoTurno resultado;
		resultado = ejecutarComandoCombate(accion, &equipo[i], objetivo);
		if (resultado == Huyendo)
		{
			return Huyendo;
		}
	}

	return Continuar;
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
		turnoEnemigo();
		ejecutarComandoCombate(Atacar, &Enemigos[i], objetivo);
	}
}
void ejecutarCombateEquipos(Personaje* equipo, Personaje* Enemigos, int tamanio)
{
	iniciarCombateEquipos();
	ResultadoTurno resultado;
	while (hayPersonajesVivos(equipo, tamanio) && hayPersonajesVivos(Enemigos, tamanio))
	{
		mostrarTituloEquipo();
		mostrarEstadoEquipo(equipo, tamanio);
		mostrarTituloEnemigo();
		mostrarEstadoEquipo(Enemigos, tamanio);
		resultado = ejecutarTurnoEquipo(equipo, Enemigos, tamanio);
		if (resultado == Huyendo)
		{
			break;
		}
		ejecutarTurnoEnemigo(Enemigos, equipo, tamanio);
	}
	if (resultado == Huyendo)
	{
		mensajeDeHuida();
		return;
	}
	if (hayPersonajesVivos(equipo, tamanio))
	{
		mostrarVictoria();
	}
	else
	{
		mostrarDerrota();
	}
}