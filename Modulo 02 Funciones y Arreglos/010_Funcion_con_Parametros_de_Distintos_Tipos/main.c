#include <stdio.h>

float  calcularPesoTotal(int objetos, float pesoPorObjeto);


int main() {

	int objetos = 45;
	float pesoPorObjeto = 1.5 ;
	/*si quisieramos que el usuario ingresara los datos lo hariamos con
	* printf("Ingrese el numero de pociones:\n");
	* scanf_s("%d%, &objetos);
	* aqui hay dos opciones o podemos determinar por default el peso de los objetos
	* o asignarlo mendiante otro scanf
	* sin olivdar que tendriamos que vaciar los valores de las variables
	*/
	printf("El peso total del inventaario es %.2f\n",calcularPesoTotal(objetos, pesoPorObjeto));

	return 0;
}

float  calcularPesoTotal(int objetos, float pesoPorObjeto) {
	return objetos * pesoPorObjeto;
}