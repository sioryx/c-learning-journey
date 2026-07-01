#include <stdio.h>

void miStrcpy(char destino[], char origen[]);

int main(void)
{
    char nombre[100];
    char copia[100];

    printf("Ingrese un nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    miStrcpy(copia, nombre);

    printf("Nombre copiado: %s\n", copia);

    /* Modifica el primer carácter de la cadena original para demostrar
       que la copia permanece sin cambios. */
    char* ptrNombre = nombre;
    *ptrNombre = 'X';

    printf("Cadena original modificada: %s\n", nombre);
    printf("Copia almacenada          : %s\n", copia);

    return 0;
}

void miStrcpy(char destino[], char origen[])
{
    while (*origen != '\0')
    {
        if (*origen == '\n')
        {
            *origen = '\0';
            break;
        }

        *destino = *origen;
        origen++;
        destino++;
    }

    *destino = '\0';
}