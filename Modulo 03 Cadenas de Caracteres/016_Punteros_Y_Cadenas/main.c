#include <stdio.h>

int main(void)
{
    char personaje[] = "Link";
    char* ptrPersonaje = personaje;

    printf("Cadena completa: %s\n", personaje);

    printf("Primer caracter: %c\n", *ptrPersonaje);
    printf("Segundo caracter: %c\n", *(ptrPersonaje + 1));
    printf("Tercer caracter: %c\n", ptrPersonaje[2]);

    return 0;
}