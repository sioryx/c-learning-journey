#include <stdio.h>
int miStrStartWith(char frase[], char palabra[]);
/*Nombre: miStrStartWith
  Descripcion:
  compara la palabra con la frase, si la primer palabra de la frase
  coincide con la palabra arroja un resultado, de lo contrario arroja 0
  Parametros:
  frase: la frase en donde se buscara
  palabra: la palabra que se buscara
  Retorno:
  Regresa 1 si es verdadero(coinciden) y 0 si es falso*/
int main(void)
{
	char nombre[100] = "Cloud Strife";
	char palabra[100] = "Cloud";
	int resultado = miStrStartWith(nombre, palabra); /*Variable declarada que almacena
	el resultado de la funcion*/
	if (resultado == 1)
	{
		printf("Las palabras coinciden");
	}
	else if (resultado== 0)
	{
		printf("No hay coincidencias");
	}


	return 0;
}

int miStrStartWith(char frase[], char palabra[])
{
	int sonIguales = 1;

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