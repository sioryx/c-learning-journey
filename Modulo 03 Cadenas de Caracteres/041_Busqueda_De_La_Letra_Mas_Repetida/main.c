#include <stdio.h>

int miStrlen(char nombre[]);

	int main(void) {
		char nombre[100];
		char letraMasRepetida = 0;
		int MaxRepeticiones = 0;

		printf("Ingrese su nombre\n");
		fgets(nombre, sizeof(nombre), stdin);

		int longitud = miStrlen(nombre);

		for (int i = 0; i < longitud; i++) {
			int conteoActual = 1; /*Declaramos una variable auxiliar
			y este primer ciclo escoge la primera letra*/
			for (int j = i + 1; j < longitud; j++) {/*
#include <stdio.h>

int miStrlen(char nombre[]);

int main(void)
{
    char nombre[100];
    char letraMasRepetida = '\0';
    int maxRepeticiones = 0;

    printf("Ingrese su nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    int longitud = miStrlen(nombre);

    /* Compara cada carácter con el resto de la cadena para
       determinar cuál aparece más veces. */
    for (int i = 0; i < longitud; i++)
    {
        int conteoActual = 1;

        for (int j = i + 1; j < longitud; j++)
        {
            if (nombre[i] == nombre[j])
            {
                conteoActual++;
            }
        }

        /* Actualiza el máximo encontrado y almacena el carácter
           correspondiente. */
        if (conteoActual > maxRepeticiones)
        {
            maxRepeticiones = conteoActual;
            letraMasRepetida = nombre[i];
        }
    }

    if (maxRepeticiones > 1)
    {
        printf("La letra mas repetida es: %c\n", letraMasRepetida);
    }
    else
    {
        printf("No se repite ninguna letra.\n");
    }

    return 0;
}

int miStrlen(char nombre[])
{
    int longitud = 0;

    /* Calcula la longitud de la cadena ignorando el salto de línea de fgets(). */
    for (int i = 0; nombre[i] != '\0'; i++)
    {
        if (nombre[i] == '\n')
        {
            nombre[i] = '\0';
            break;
        }

        longitud++;
    }

    return longitud;
}