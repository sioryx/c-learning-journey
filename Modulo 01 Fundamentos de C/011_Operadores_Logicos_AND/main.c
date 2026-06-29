#include <stdio.h>

int main(void)
{
    // Declaración de variables
    int numero1;
    int numero2;

    // Solicitar los números al usuario
    printf("Ingrese el primer numero: ");
    scanf_s("%d", &numero1);

    printf("Ingrese el segundo numero: ");
    scanf_s("%d", &numero2);

    // Verificar que ambos números cumplan la condición
    if (numero1 >= 1 && numero2 <= 100)
    {
        printf("Los numeros cumplen la condicion.\n");
    }
    else
    {
        printf("Los numeros no cumplen la condicion.\n");
    }

    // Finaliza correctamente el programa
    return 0;
}