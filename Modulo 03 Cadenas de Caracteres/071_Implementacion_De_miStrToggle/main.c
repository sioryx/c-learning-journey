#include <stdio.h>
void miStrToggleP(char cadena[]);
void miStrToggleI(char cadena[]);
/* Nombre: miStrToggle
Descripcion:
Intercambia minusculas por mayusculas y viceversa
Parametros
cadena: cadena que sera modificada
Retorno
No devuelve valor, la modificación se realiza directamente
sobre la cadena original*/
int main(void)
{
	char nombre[100] = "SiOrYx";
	printf("%s\n", nombre);/*Muetsra valor original*/
	miStrToggleP(nombre);/*Llamado a la funcion*/
	printf("%s\n", nombre);/*Muestra los cambios realizados*/
	return 0;
}

void miStrToggleI(char cadena[])
{
	for (int i = 0; cadena[i] != '\0'; i++)
	{
		if (cadena[i] >= 'a' && cadena[i] <= 'z')
		{
			cadena[i] -= 32;
		}
		else if (cadena[i]>= 'A' && cadena[i] <= 'Z')
		{
			cadena[i] += 32;
		}
	}
}

void miStrToggleP(char cadena[])
{
	while (*cadena  != '\0')
	{
		if (*cadena >= 'a' && *cadena <= 'z')
		{
			*cadena -= 32;
		}
		else if (*cadena >= 'A' && *cadena <= 'Z')
		{
			*cadena += 32;
		}
		cadena++;
	}
}