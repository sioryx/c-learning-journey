#include <stdio.h>

int buscarNivel(int niveles[], int tamanio, int nivelBuscado);

int main() {
	int nivelBuscado;
	int niveles[10] = { 5,8,12,17,23,24,30,31,40,80 };
	int tamanio = sizeof(niveles) / sizeof(niveles[0]);
	printf("========Busqueda por nivel=========\n");
	printf("Ingrese el nivel deseado: \n");
	scanf_s("%d", &nivelBuscado);
	int posicion = buscarNivel(niveles, tamanio, nivelBuscado);

if (posicion == -1) {
    printf("Nivel no encontrado.\n");
} else {
    printf("Nivel encontrado en la posicion %d.\n", posicion);
}
	return 0;
}
int buscarNivel(int niveles[], int tamanio, int nivelBuscado) {
	int posicion = -1;
	for (int i = 0; i < tamanio; i++) {
		if (nivelBuscado == niveles[i]) {
			posicion = i;
			break;/*
 * Se detiene la búsqueda una vez encontrado el nivel,
 * ya que no es necesario seguir recorriendo el arreglo.
 */
		}
		
	}
	return posicion; // Devuelve -1 cuando el nivel no se encuentra en el arreglo.
}
