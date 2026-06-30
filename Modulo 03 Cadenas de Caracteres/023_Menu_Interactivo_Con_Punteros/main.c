#include <stdio.h>
void mostrarEstado(int vidaMax, int manaMax, int nivel, int vida, int mana);
int usarPocionCurativa(int* vida, int *vidaMax);
void subirNivel(int* nivel, int* vidaMax, int* manaMax);

void mostrarInventario(int* inventario, int tamanio, const char *objetos[]);
void mostrarMenu(void);

int main(void) {
	int vidaMax = 200;
	int vida = 150;
	int mana = 50;
	int manaMax = 100;
	int nivel = 1;
	int opcion;
	const char* objetos[5] = { "Pocion", "Bombas", "Cuchillos", "Elixir", "Cola de Fenix" };
	int inventario[5] = { 10,5,3,0,1 };
	
	
	int tamanio = sizeof(inventario) / sizeof(inventario[0]);
	do {
		mostrarMenu();
		scanf_s("%d", &opcion);
		switch (opcion) {

		case 1:
			mostrarEstado(vidaMax, manaMax, nivel,vida,mana);
			break;
		case 2:
			if (usarPocionCurativa(&vida, &vidaMax) == 1) {
				printf("Has usado una pocion y recuperas salud\n");
				printf("Salud actual %d de %d\n", vida, vidaMax);

			}
			else {
				printf("Tu salud ya esta al maximo\n");
			}
			break;
		case 3:
			subirNivel(&nivel, &vidaMax, &manaMax);
			mostrarEstado(vidaMax, manaMax, nivel, vida, mana);
			break;
		case 4:
			mostrarInventario(inventario, tamanio,objetos);
			break;
		case 5:
			printf("Reanudando partida\n");
			break;
		default:
			printf("Opcion invalida\n");

		}
		
	}
	while (opcion != 5);

	return 0;
}


void mostrarMenu(void) {
	printf("=========Menu del juego==========\n");
	printf("1.- Ver estado\n");
	printf("2.- Usar pocion\n");
	printf("3.- Subir nivel\n");
	printf("4.- Ver inventario\n");
	printf("5.- Salir\n");
}
void mostrarEstado(int vidaMax, int manaMax, int nivel, int vida, int mana) {
	printf("Salud %d de %d\n", vida, vidaMax);
	printf("Mana %d de %d\n", mana, manaMax);
	printf("Nivel actual %d\n", nivel);

}
int usarPocionCurativa(int* vida,int *vidaMax) {
	if (*vida == *vidaMax) {
	return 0;
	}
		*vida += 75;
		if (*vida > *vidaMax) {
			*vida = *vidaMax;
		}
		return 1;
}
void subirNivel(int* nivel, int* vidaMax, int* manaMax) {
	*nivel += 1;
	*vidaMax += 50;
	*manaMax += 30;

}
void mostrarInventario(int* inventario, int tamanio, const char* objetos[]) {
	for (int i = 0; i < tamanio; i++) {

		printf("%d %s\n", inventario[i], objetos[i]);
	 }
	
}
