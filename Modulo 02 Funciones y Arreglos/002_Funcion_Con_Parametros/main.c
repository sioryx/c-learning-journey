#include <stdio.h>

int calcularVidaRestante(int vidaActual, int danio);

int main() {
	int vidaActual;
	int danio;
	printf("Ingrese la vida actual del personaje:\n");
	scanf_s("%d", &vidaActual);
	printf("Ingrese el danio recibido:\n");
	scanf_s("%d", &danio);

	printf("Vida restante %d", calcularVidaRestante(vidaActual, danio));
	return 0;

}
int calcularVidaRestante(int vidaActual, int danio) {
	return vidaActual - danio;
	
}