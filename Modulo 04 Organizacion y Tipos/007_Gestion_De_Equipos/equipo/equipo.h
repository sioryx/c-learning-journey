#ifndef EQUIPO_H
#define EQUIPO_H
#include "personaje.h" 



void mostrarEquipo(Personaje* equipo, int tamanio);
int hayPersonajesVivos(Personaje* equipo, int cantidad);
int contarPersonajesVivos(Personaje* equipo, int cantidad);
Personaje* obtenerPersonaje(Personaje equipo[], int cantidad, int indice);


#endif // !EQUIPO_H
