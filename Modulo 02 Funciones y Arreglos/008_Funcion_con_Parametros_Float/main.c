#include <stdio.h>

float calcularVelocidadPromedio(float distancia, float tiempo);

int main(void) {
	float distancia;
	float tiempo;
	printf("Ingrese la distancia recorrida (km):\n");
	scanf_s("%f", &distancia);
	printf("Ingrese el tiempo de recorrido(hrs):\n");
	scanf_s("%f", &tiempo);
	if (tiempo == 0) {
		printf("Error, el tiempo no puede ser 0\n");

	}
	else {
		printf("Su velocidad promedio es %.2f km/h\n", calcularVelocidadPromedio(distancia, tiempo));

	}
	return 0;
}
float calcularVelocidadPromedio(float distancia, float tiempo) {
	float velocidad = distancia / tiempo;

	return velocidad;
}
