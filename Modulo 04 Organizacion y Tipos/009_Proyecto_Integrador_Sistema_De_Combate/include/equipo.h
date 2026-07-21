#ifndef EQUIPO_H
#define EQUIPO_H
#include "personaje.h" 
#define MAX_PERSONAJES 4


void mostrarEquipo(Personaje* equipo, int tamanio);
int hayPersonajesVivos(Personaje* equipo, int cantidad);
int contarPersonajesVivos(Personaje* equipo, int cantidad);
Personaje* obtenerPersonaje(Personaje equipo[], int cantidad, int indice);
Personaje* obtenerPrimerPersonajeVivo(Personaje* equipo, int cantidad);

#endif // !EQUIPO_H
