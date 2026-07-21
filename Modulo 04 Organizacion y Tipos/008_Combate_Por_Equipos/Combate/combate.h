#ifndef COMBATE_H
#define COMBATE_H
#include "personaje.h"
#include "equipo.h"


typedef enum Comando
{
	Atacar = 1,
	Defender,
	Huir
}Comando;

void iniciarCombate(const Personaje* jugador, const Personaje* enemigo);
void mostrarMenuCombate(void);
void finalizarCombate(void);
Comando leerAccion(void);
void ejecutarComandoCombate(Comando accion, Personaje* atacante, Personaje* defensor);
void ataque(Personaje* atacante, Personaje* defensor);
void defendiendo(Personaje* defensor);
void mensajeDeHuida(void);
int calculoDanio(Personaje* atacante);
void ejecutarCombate(Personaje* atacante, Personaje* defensor);
void iniciarCombateEquipos(void);
void ejecutarTurnoEquipo(Personaje* equipo, Personaje* Enemigos, int tamanio);
void ejecutarTurnoEnemigo(Personaje* equipo, Personaje* Enemigos, int tamanio);
void ejecutarCombateEquipos(Personaje* equipo, Personaje* Enemigos, int tamanio);
#endif //COMBATE_H