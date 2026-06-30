#include <stdio.h>

int main(void)
{
    int nivel = 100;
    int* punteroNivel = &nivel;

    printf("Su nivel es: %d\n", nivel);
    printf("Esta almacenado en: %p\n", (void*)&nivel);

    printf("Direccion almacenada en el puntero: %p\n", (void*)punteroNivel);
    printf("Valor apuntado por el puntero: %d\n", *punteroNivel);

    return 0;
}