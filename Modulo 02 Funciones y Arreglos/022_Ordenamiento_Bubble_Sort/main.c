#include <stdio.h>

void bubbleSort(int arr[], int n);
int main(void) {
	int monedas[10] = { 10,7,8,3,4,9,2,5,1,6 };
	int n = sizeof(monedas) / sizeof(monedas[0]);//para identificar tamaño de arreglo
	
	
	printf("Arreglo original:");
	for (int i = 0; i < 10; i++) {

		printf(" %d ", monedas[i]);
} //Primera impresion del arreglo original
	printf("\nAplicando bubblesort...\n");
	bubbleSort(monedas, n); //aplicamos la funcion de bubul sor

	printf("Arreglo ordenado: ");
	for(int i = 0; i < 10; i++) {

		printf("%d ", monedas[i]);
	}
	



	return 0;
}

void bubbleSort(int arr[], int n) {
	int i, j, temp;
	for (int i = 0; i < 9; i++) { //este for recorre el arreglo

		for (j = 0; j < 9 - i; j++) {// este for desplaza el numero a la derecha si es mayor

			if (arr[j] > arr[j + 1]) {  //Se compara la posicion con la siguiete
				temp = arr[j]; //Se guarda en temporal si es mayor
				arr[j] = arr[j + 1]; //se iguala a la siguiente posicion 
				arr[j + 1] = temp;//Aqui se le dice que en esa posicion va el valor guardado en temp
			}
			/*la variable temporal almacena el dato del arreglo
			cuando la posicion j es mayor que j+1 se almacena en temporal
			ahora la posicion j se le suma 1 osea la siguiente posicion
			quedando esta como la variable temporal*/
		}
	}/*Dicho de otra manera mas sencilla cuando el numero j
	 posicion es mayor que el de la siguiente posicion se intercambia*/
}