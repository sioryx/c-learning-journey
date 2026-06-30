#include <stdio.h>

float calcularPromedio(int danio[], int tamanio);

int main(void) {
	int danio[9] = { 21,25,30,22,22,28,24,23,25 };
	int tamanio = sizeof(danio) / sizeof(danio[0]);
	/*
 * Arreglo de cadenas utilizado para mostrar los ataques
 * con un formato más descriptivo.
 */
	const char *ordinales[] = { "Primer","Segundo","Tercer","Cuarto","Quinto","Sexto","Septimo","Octavo","Noveno" };
	printf("Este es tu danio realizado en los ultimos 9 ataques:\n");
	for (int i = 0; i < tamanio; i++) {
		printf("%s ataque = %d\n", ordinales[i], danio[i]);

	}

	printf("El promedio de danio de tus ataques es: %.2f", calcularPromedio(danio, tamanio));



	return 0;
}

float calcularPromedio(int danio[], int tamanio) {
	float suma = 0;
// Suma todos los elementos del arreglo para calcular el promedio.
	for (int i = 0; i < tamanio; i++) {
		suma += danio[i];
	}
	float promedio = suma / tamanio;
	return promedio;
}