#include <stdio.h>

int main() {
	int municion[6] = {};
	int contador = 0;
	while (contador < 6) {
		printf("Por favor ingrese la cantidad de municion del cargador\n");
		scanf_s("%d", &municion[contador]); 
		//Aqui me generaba error por usar &municion[6] 
		contador++;
	}
	for (int i = 0; i < 6; i++) {

		printf("Municion del cargador %d: %d balas\n", i + 1, municion[i]);
		
	}
	return 0;
}