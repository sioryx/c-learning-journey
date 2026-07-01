#include <stdio.h>
void palabraMagica(int Palindromo);
int main(void) {

	char nombre[100];
	int palindromo = 1;
	int longitud = 0;
	printf("Ingrese la palabra magica: \n");
	fgets(nombre, sizeof(nombre), stdin);
/* Elimina el salto de línea agregado por fgets() y calcula la longitud de la cadena. */
	for (int i = 0; nombre[i] != '\0'; i++) {
		if (nombre[i] == '\n') {
			nombre[i] = '\0';
			break;
		
			}
		longitud++;
		}/* Compara simultáneamente los caracteres del inicio y del final de la cadena. */
	int i = 0;
	int j = longitud - 1;
	/*Ahora cuando el while entra compara los valores de i y j*/
	while (i<j){
		if (nombre[i] != nombre[j]) {/* Si dos caracteres no coinciden, la cadena deja de ser un palíndromo. */
			palindromo = 0;
			break;
		}
		i++;
		j--;/*Añadimos y restamos respectivamente para la comparacion de valores*/
	}
	palabraMagica(palindromo);
	return 0;
}
void palabraMagica(int palindromo) {

	if (palindromo == 1) {
	printf("Has adivinado la palabra, puedes pasar\n");


	}
	else {
	printf("Palabra incorrecta,intenta de nuevo\n");
	
	}
}