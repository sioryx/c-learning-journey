#ifndef  PERSONAJE_H
#define PERSONAJE_H


typedef enum Clase
{
	Guerrero,
	Mago,
	Arquero,
	Ladron
}Clase;

typedef struct Personaje
{
	char nombre[100];
	int vida;
	int ataque;
	Clase clase;
}Personaje;


const char* obtenerNombreClase(Clase clase);
void mostrarPersonaje(Personaje* personaje);
void inicializarPersonaje(Personaje* personaje, const char* nombre, int vida, int ataque, Clase clase);
#endif // ! personaje_h