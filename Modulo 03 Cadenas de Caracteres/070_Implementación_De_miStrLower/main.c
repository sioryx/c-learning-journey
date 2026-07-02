#include <stdio.h>

void miStrLowerI(char cadena[]);
void miStrLowerP(char cadena[]);
/*Nombre: miStrLower (i||p)
Convierte todas las letras mayusculas a minusculas de una cadena
utilizando aritmetica ASCII con punteros o indices (i||p)
Parametros:
cadena: cadena que sera modificada.

Retorno:
No devuelve valor, la modificacion se realiza directamente
sobre la cadena original*/
int main(void)
{
	char nombre[] = "SIORYX";

	printf("%s\n", nombre); /* Muestra el valor original*/

	miStrLowerI(nombre);/*Aplicamos la funcion*/

	printf("%s\n", nombre);/*Muestra los cambios realizados */

	return 0;
 }

void miStrLowerI(char cadena[])
{

	for (int i = 0; cadena[i] != '\0'; i++)
	{
		if (cadena[i] >= 'A' && cadena[i] <= 'Z')
		{
			cadena[i] += 32;
		}
	}
}
void miStrLowerP(char cadena[])
{

	while (*cadena != '\0')
	{
		if (*cadena >= 'A' && *cadena <= 'Z')
		{
			*cadena += 32;
		}
		cadena++;
	}
}


