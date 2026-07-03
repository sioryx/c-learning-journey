#include <stdio.h>

int miStrEndsWith(char frase[], char palabra[]);
/*Nombre: miStrEndsWith
  Descripción: Compara una palabra con el final de una frase
  Parametros: 
  Frase: Frase en donde se realiza la comprobación
  Palabra: palabra a buscar en la frase
  Retorno: Regresa 1 si coincide y 0 si no;*/

int main(void)
{
	char nombre[100] = "Cloud Strife";
	char palabra[100] = "Strife";
	int resultado = miStrEndsWith(nombre, palabra);

	


	return 0;
}

int miStrEndsWith(char frase[], char palabra[])
{
	int sonIguales = 1;
	int largoFrase = 0;
	int largoPalabra = 0;
	char* auxFrase = frase;
	char* auxPalabra = palabra;
	while (*auxFrase != '\0')
	{
		largoFrase++;
		auxFrase++;
	}
	while (*auxPalabra != '\0') {
		largoPalabra++;
		auxPalabra++;
	}
	if (largoPalabra > largoFrase)
	{
		return  0;
	}
	frase = frase + (largoFrase - largoPalabra);
	
	while (*palabra == *frase && *palabra != '\0' && *frase != '\0')
	{
		frase++;
		palabra++;

	}
	if (*palabra != '\0')
	{
		sonIguales = 0;
	}

	return sonIguales;

}