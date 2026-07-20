#ifndef COMBATE_H
#define COMBATE_H
#include "personaje.h"

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





#endif // !COMBATE_H
