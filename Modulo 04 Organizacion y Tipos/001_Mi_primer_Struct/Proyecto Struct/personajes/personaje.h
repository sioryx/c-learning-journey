#ifndef  personaje_h
#define personaje_h



struct Personaje
{
	char nombre[100];
	int vida;
	int ataque;
};

void mostrarPersonaje(struct Personaje* personaje); 
void inicializarPersonaje(struct Personaje* personaje, const char* nombre, int vida, int ataque);
#endif // ! personaje_h