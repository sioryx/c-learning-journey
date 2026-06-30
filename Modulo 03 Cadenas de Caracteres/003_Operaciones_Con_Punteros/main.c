#include <stdio.h>

int main(void) {

	int oro = 500;
	int* ptrOro = &oro;
	printf("Su oro actual es: %d\n", oro);
	*ptrOro -= 100;

	printf("Oro restante: %d\n", oro);

	return 0;

}