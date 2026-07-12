#include <stdio.h>
#include <string.h>

int main(void)
{
    char nombre[100];

    printf("Ingrese el nombre de la ciudad:\n");
    fgets(nombre, sizeof(nombre), stdin);

    /* Cuenta cuántos caracteres consecutivos desde el inicio
       pertenecen al conjunto de letras permitido. */
    printf("%zu\n",
           strspn(nombre,
                  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"));

    return 0;
}