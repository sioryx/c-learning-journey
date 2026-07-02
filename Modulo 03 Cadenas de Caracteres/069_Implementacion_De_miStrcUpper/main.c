#include <stdio.h>

void miStrUpperI(char cadena[]);
void miStrUpperP(char cadena[]);
/*Declaración de funciones
Nombre miStrUpper(i || p)
Descripción:
Convierte todas las letras minusculas de una cadena a mayusculas
usando aritmetica ASCII con indices o punteros  ( i|| p)*
Parametros:
- cadena:cadena que sera modificada
Retorno: 
- No devuelve valor, la modificacione se realiza 
directamente sobre la cedan original*/

int main(void) {
	char nombre[] = "sioryx";

	printf("%s\n", nombre);//Muestra el contenido original

	miStrUpperP(nombre);/*Aplica la funcion*/

	printf("%s\n", nombre); /*Muestra los cambios aplicados*/

}
/*Funcion declarada con indices*/
void miStrUpperI(char cadena[]) {
 /*Reorre el arreglo*/
	for (int i = 0; cadena[i] != '\0'; i++)
	{/*Modifica el valor en función del codigo ASCII*/
		if (cadena[i] >= 'a' && cadena[i] <= 'z')
		{
			cadena[i] = cadena[i] - 32;
		}
	}
	
}
/*Funcion declara con punteros*/
void miStrUpperP(char cadena[]) {
	/*Recorre el arreglo*/
	while (*cadena != '\0')
	{/*Modifica el valor en función del codigo ASCII*/
		if (*cadena >= 'a' && *cadena <= 'z')
		{
			*cadena -= 32;
		}
		/*Avanza al siguiente caracter*/
		cadena++;
	}
}