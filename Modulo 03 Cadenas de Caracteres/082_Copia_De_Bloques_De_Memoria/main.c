#include <stdio.h>
#include <string.h>

int main(void)
{
    int inventario[] = { 10, 20, 30, 40, 50 };
    int copia[5];

    int tamanio = sizeof(inventario) / sizeof(inventario[0]);
    int tamanioC = sizeof(copia) / sizeof(copia[0]);

    /* Muestra el contenido original del arreglo. */
    for (int i = 0; i < tamanio; i++)
    {
        printf("%d ", inventario[i]);
    }

    printf("\n");

    /* Copia todo el bloque de memoria del arreglo original
       hacia el arreglo destino. */
    memcpy_s(copia,
             sizeof(copia),
             inventario,
             sizeof(inventario));

    /* Muestra el contenido del arreglo copiado. */
    for (int i = 0; i < tamanioC; i++)
    {
        printf("%d ", copia[i]);
    }

    return 0;
}