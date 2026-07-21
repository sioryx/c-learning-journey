#ifndef INTERFAZ_H
#define INTERFAZ_H
#include "personaje.h"
#include "equipo.h"

void mostrarAtaque(Personaje* atacante, Personaje* enemigo);
void mostrarDanio(Personaje* enemigo, int danio);
void mostrarEstado(Personaje* personaje);
void mostrarEstadoEquipo(Personaje* equipo, int tamanio);
void  mostrarVictoria(void);
void mostrarDerrota(void);
void turnoJugador(void);
void turnoEnemigo(void);
void mostrarTituloEquipo(void);
void mostrarTituloEnemigo(void);




#endif // !INTERFAZ_H
