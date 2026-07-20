#include <stdio.h>
#include <string.h>

int main(void)
{
    char texto[] = "ABCDEF";

    /* Desplaza cinco caracteres una posición hacia la derecha.
       memmove_s permite realizar esta operación de forma segura
       incluso cuando el origen y el destino se superponen. */
    memmove_s(texto + 1,
              sizeof(texto) - 1,
              texto,
              5);

    printf("%s\n", texto);

    return 0;
}