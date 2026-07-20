#ifndef  personaje_h
#define personaje_h



struct Personaje
{
	char nombre[100];
	int vida;
	int ataque;
};

void mostrarPersonaje(Personaje* personaje); 
void inicializarPersonaje(Personaje* personaje, const char* nombre, int vida, int ataque);
#endif // ! personaje_h