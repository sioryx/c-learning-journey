#include <stdio.h>

int main(void)
{
    char jefe[] = "Ganondorf";
    char* ptrJefe = jefe;

    printf("Recorrido del nombre del jefe:\n");

    while (*ptrJefe != '\0')
    {
        printf("%c\n", *ptrJefe);
        ptrJefe++;
    }

    return 0;
}