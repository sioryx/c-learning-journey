#include <stdio.h>
#include <string.h>

int main(void)
{
    int inventario[] = { 10, 20, 30, 40 };
    int inventario1[] = { 10, 20, 30, 40 };

    /* Compara ambos bloques de memoria byte por byte. */
    int resultado = memcmp(inventario,
                           inventario1,
                           sizeof(inventario));

    if (resultado == 0)
    {
        printf("Los inventarios son iguales.\n");
    }
    else
    {
        printf("Los inventarios son diferentes.\n");
    }

    return 0;
}