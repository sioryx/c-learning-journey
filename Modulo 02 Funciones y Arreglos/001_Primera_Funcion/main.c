#include <stdio.h>

int sumarMonedas(int coinBeg, int finCoin);

int main() {
	int coinBeg;
	int finCoin;
	printf("Ingrese el numero de monedas actuales:\n");
	scanf_s("%d", &coinBeg);
	printf("Ingrese el numero de monedas encontradas:\n");
	scanf_s("%d", &finCoin);
	int total = sumarMonedas(coinBeg,finCoin );
	printf("Total de monedas %d\n", total);
		return 0;
}
int sumarMonedas(int coinBeg, int finCoin) {
	return coinBeg + finCoin;
	
}
