#include <stdio.h>

int main(void)
{
    int enemigos[4] = { 100, 200, 300, 400 };
    int* ptrEnemigos = enemigos;

    printf("enemigos[0] = %d\n", *ptrEnemigos);
    printf("enemigos[1] = %d\n", *(ptrEnemigos + 1));
    printf("enemigos[2] = %d\n", *(ptrEnemigos + 2));
    printf("enemigos[3] = %d\n", *(ptrEnemigos + 3));

    return 0;
}