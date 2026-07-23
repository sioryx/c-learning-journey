#include <stdio.h>
#include <malloc.h>
int main(void)
{
	int* vida = malloc(sizeof(int));
	*vida = 250;

	printf("direccion %p\n", (void*)vida);
	printf("valor %d\n", *vida);

	return 0; 

}