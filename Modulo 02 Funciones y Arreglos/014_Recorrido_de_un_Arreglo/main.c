#include <stdio.h>

int main(void) {
	int vidas[5]={ 1,2,3,4,5 };

	for (int i = 0; i < 5; i++){
	printf("Ranuras de vida %d: %d vidas totales\n", i + 1, vidas[i]);
}
return 0;
}