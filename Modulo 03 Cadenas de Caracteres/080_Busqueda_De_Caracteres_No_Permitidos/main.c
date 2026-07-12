#include <stdio.h>
#include <string.h>

int main(void)
{
    char nombre[100];

    printf("Ingrese el nombre del personaje:\n");
    fgets(nombre, sizeof(nombre), stdin);

    /* Cuenta los caracteres válidos desde el inicio de la cadena
       hasta encontrar el primer dígito. */
    printf("%zu\n", strcspn(nombre, "0123456789"));

    return 0;
}