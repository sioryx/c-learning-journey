#include <stdio.h>

int main(void) {

	char nombreA[100];
	char nombreB[100];
	int longitud = 0;
	int contador = 0;
	int i = 0;
#include <stdio.h>

int main(void)
{
    char nombreA[100];
    char nombreB[100];

    int longitud = 0;
    int contador = 0;
    int i = 0;

    char* ptrNombreInvertido = nombreB;

    printf("Ingrese el nombre de su personaje:\n");
    fgets(nombreA, sizeof(nombreA), stdin);

    /* Elimina el salto de línea y, en un solo recorrido,
       calcula la longitud, cuenta las vocales y convierte
       la cadena a mayúsculas. */
    for (i = 0; nombreA[i] != '\0'; i++)
    {
        if (nombreA[i] == '\n')
        {
            nombreA[i] = '\0';
            break;
        }

        longitud++;

        if (nombreA[i] == 'a' || nombreA[i] == 'A' ||
            nombreA[i] == 'e' || nombreA[i] == 'E' ||
            nombreA[i] == 'i' || nombreA[i] == 'I' ||
            nombreA[i] == 'o' || nombreA[i] == 'O' ||
            nombreA[i] == 'u' || nombreA[i] == 'U')
        {
            contador++;
        }

        if (nombreA[i] >= 'a' && nombreA[i] <= 'z')
        {
            nombreA[i] -= 32;
        }
    }

    printf("Longitud: %d\n", longitud);
    printf("Cantidad de vocales: %d\n", contador);
    printf("Nombre en mayusculas: %s\n", nombreA);

    /* Construye una nueva cadena con los caracteres en orden inverso. */
    for (int j = longitud - 1; j >= 0; j--)
    {
        *ptrNombreInvertido = nombreA[j];
        ptrNombreInvertido++;
    }

    *ptrNombreInvertido = '\0';

    printf("Nombre invertido: %s\n", nombreB);

    return 0;
}