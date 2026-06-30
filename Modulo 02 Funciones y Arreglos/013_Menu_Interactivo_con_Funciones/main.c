#include <stdio.h>

void mostrarMenu(void);

int main(void) {
	int opcion;
	mostrarMenu();
	printf("Selecciona una opcion\n");
	scanf_s("%d", &opcion);
	

	switch (opcion) {
	case 1:
		printf("Reanudando partida...");
		break;
	case 2:
		printf("Objetos curativos\n");
		printf("Objetos arrojadizos\n");
		printf("Objetos clave\n");
		printf("Notas de viaje\n");
		break;
	case 3:
		printf("Guardando partida...");
		break;
	case 4:
		printf("Abandonando partida...");
		break;
		/* normalmente no se puede elegir opciones extra a las que muestra el menu
		dentro de un juego pero por fines practicos usaremos el default*/
	default:
		printf("Opcion no valida");
	}
	return 0;
}

void mostrarMenu(void) {
	printf("MENU DE PAUSA\n");
	printf("1.- Jugar\n");
	printf("2.- Inventario\n");
	printf("3.- Guardar partida\n");
	printf("4.- Salir del juego\n");
}

