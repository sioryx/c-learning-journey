#include <stdio.h>

int main() {
	int opcion;
	
	do {
		printf("1.-Atacar\n");
		printf("2.-Objeto\n");
		printf("3.-Hechizos\n");
		printf("4.-Huida\n");
		scanf_s("%d", &opcion);
		if (opcion == 1)
		{
			printf("Has realizado un ataque\n");
		}
		else if (opcion == 2) {
			printf("Pocion\n");
		}
		else if (opcion == 3) {
			printf("Bola de fuego\n");
		}
	} while (opcion != 4);
	printf("Has huido del combate\n");
		return 0;
}