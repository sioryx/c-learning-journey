#include <stdio.h>

void miStrcpy(char destino[], char origen[]);

int main(void)
{
    char inventario[100] = "Espada Legendaria";
    char respaldo[100];

    printf("Inventario original: %s\n", inventario);

    miStrcpy(respaldo, inventario);

    printf("Respaldo          : %s\n", respaldo);

    /* Modifica el inventario original para comprobar
       que el respaldo permanece sin cambios. */
    char* ptrInventario = inventario;
    *ptrInventario = 'X';

    printf("Inventario modificado: %s\n", inventario);
    printf("Respaldo almacenado : %s\n", respaldo);

    return 0;
}

void miStrcpy(char destino[], char origen[])
{
    while (*origen != '\0')
    {
        *destino = *origen;
        destino++;
        origen++;
    }

    *destino = '\0';
}