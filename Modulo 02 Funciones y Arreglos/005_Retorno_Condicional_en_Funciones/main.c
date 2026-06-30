#include <stdio.h>

int manaRestante(int manaActual, int costeHechizo);

int main(void) {
	int manaActual;
	int costeHechizo;
	
	printf("Ingrese su mana actual\n");
	scanf_s("%d", &manaActual);
	printf("Ingrese el costo de mana del hechizo\n");
	scanf_s("%d", &costeHechizo);
	int mana = manaRestante(manaActual, costeHechizo);

	if (mana==0 && manaActual < costeHechizo){
		printf("Mana insuficiente\n");
	}
	printf("Mana restante: %d\n", mana);
	return 0;
}

int manaRestante(int manaActual, int costeHechizo){
	if (manaActual < costeHechizo) {
		return 0; //funciones que hacen calculos no deben imprimir otra informacion<<
	}
	else {
		return manaActual - costeHechizo;
	}
	}
