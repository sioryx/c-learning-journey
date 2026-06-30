#include <stdio.h>

void mostrarMenu(void);
int opcion;
int main(void) {
	mostrarMenu();
	printf("Por favor elige una opcion\n");
	scanf_s("%d", &opcion);
	switch (opcion) {
	case 1:
			printf("En el principio los dragones gobernaban la tierra...\n");
		
			break;
	case 2:
		printf("Cargando partida...\n");
		break;
	case 3:
		printf("General\n");
		printf("Audio\n");
		printf("Video\n");
		break;
	case 4:
		printf("Saliendo del juego\n");
		break;
	default: 
		printf("Opcion no valida\n");
		
	}
	return 0;

}

void mostrarMenu(void) {
	printf("1.-Nueva partida\n");
	printf("2.-Cargar partida\n");
	printf("3.-Configuracion\n");
	printf("4.- Salir\n");
}