#include <stdio.h>

void miStrTrimI(char destino[], char origen[]);
void miStrTrimP(char destino[], char origen[]);
int miStrLen(char cadena[]);
/*	Nombre: miStrTrim
	Descripcion: Elimina los espacios al inicio y al final 
	de una cadena de caracteres conservando los espacios intermedios.
	Parametros:
	destino: la ubicacion de donde se va a almacenar la cadena
	modificada
	origen: La cadena original que se modificara.
	Retorno:
	No devuelve ningun valor, la modificacion se realiza sobre 
	otra cadena vacia a la cual llamamos por medio de printf
*/
int main(void)
{
	char nombre[100] = "   Cloud Strife   ";
	char copia[100];
	printf("%s\n", nombre);/*Cadena original*/
	printf("%d\n", miStrLen(nombre));
	miStrTrimP(copia, nombre);/*Realiza elminacion de espacios*/
	
	printf("%s\n", copia); /*Muestra la cadena modificada*/
	printf("%d\n", miStrLen(copia));
	return 0;
}

void miStrTrimP(char destino[], char origen[])
{
	while (*origen == ' ')
	{
		origen++;
	}
	char* inicioDestino = destino;
	while (*origen != '\0')
	{
		*destino = *origen;
		origen++;
		destino++;
	}
	*destino = '\0';
	destino--;
	while (destino >= inicioDestino && *destino == ' ')
	{
		*destino = '\0';
		destino--;
	}
}
void miStrTrimI(char destino[], char origen[])
{
	int i = 0;
	int j = 0;
	while (origen[i] == ' ')
	{
		i++;
	}
	
	while (origen[i] != '\0')
	{
		destino[j] = origen[i];
		i++;
		j++;
		
	}
	destino[j] = '\0';
	j--;
	while (j >= 0 && destino[j] == ' ')
	{
		destino[j] = '\0';
		j--;
	}
}

int miStrLen(char cadena[])
{
	int longitud = 0;
	while (*cadena != '\0') {
		cadena++;
		longitud++;
	}
	return longitud;
}