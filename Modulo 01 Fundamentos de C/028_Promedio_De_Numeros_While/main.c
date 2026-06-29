#include <stdio.h>

int main(void)
{
    // Declaración de variables
    int numero;
    int contador = 0;
    int suma = 0;
    float promedio;

    // Solicitar el primer número
    printf("Ingrese un numero (0 para finalizar): ");
    scanf_s("%d", &numero);

    // Leer números hasta que el usuario ingrese 0
    while (numero != 0)
    {
        suma += numero;
        contador++;

        printf("Ingrese un numero (0 para finalizar): ");
        scanf_s("%d", &numero);
    }

    // Calcular y mostrar el promedio
    if (contador > 0)
    {
        promedio = (float)suma / contador;
        printf("El promedio es: %.2f\n", promedio);
    }
    else
    {
        printf("No se ingresaron numeros.\n");
    }

    // Finaliza correctamente el programa
    return 0;
}