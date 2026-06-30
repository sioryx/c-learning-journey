#include <stdio.h>

int main(void)
{
    int niveles[5] = { 5, 10, 15, 20, 25 };

    printf("niveles[0]     = %d\n", niveles[0]);
    printf("*(niveles + 0) = %d\n", *(niveles + 0));

    printf("niveles[3]     = %d\n", niveles[3]);
    printf("*(niveles + 3) = %d\n", *(niveles + 3));

    return 0;
}