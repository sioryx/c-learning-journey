#include <stdio.h>

void ganarExperiencia(int* experiencia);

int main(void)
{
    int experiencia = 1000;

    printf("Experiencia inicial: %d\n", experiencia);

    ganarExperiencia(&experiencia);

    printf("Experiencia despues de llamar a la funcion: %d\n", experiencia);

    return 0;
}

void ganarExperiencia(int* experiencia)
{
    *experiencia += 500;
}