#ifndef EQUIPO_H
#define EQUIPO_H
#include "personaje.h" 



void mostrarEquipo(Personaje* equipo, int tamanio);
Personaje* obtenerPersonaje(Personaje equipo[], int cantidad, int indice);
int hayPersonajesVivos(Personaje* equipo, int cantidad);


#endif // !EQUIPO_H
