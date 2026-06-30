#include <stdio.h>

int main(void)
{
    int experiencia[5] = { 100, 200, 300, 400, 500 };
    int* ptrExperiencia = experiencia;

    int tamanio = sizeof(experiencia) / sizeof(experiencia[0]);

    for (int i = 0; i < tamanio; i++)
    {
        printf("experiencia[%d] = %d\n", i, *ptrExperiencia);
        ptrExperiencia++;
    }

    return 0;
}