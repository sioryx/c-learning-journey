#include <stdio.h>

int main(void)
{
    // Declaración e inicialización de variables
    int a = 10;
    int b = 2;

    // Variables para almacenar los resultados
    int suma;
    int resta;
    int multiplicacion;
    int division;
    int resto;

    // Operación de suma
    suma = a + b;
    printf("La suma de los numeros es: %d\n", suma);

    // Operación de resta
    resta = a - b;
    printf("La resta de los numeros es: %d\n", resta);

    // Operación de multiplicación
    multiplicacion = a * b;
    printf("La multiplicacion de los numeros es: %d\n", multiplicacion);

    // Operación de división
    division = a / b;
    printf("El resultado de dividir los numeros es: %d\n", division);

    // Operación módulo (resto de la división)
    resto = a % b;
    printf("El resto de la division es: %d\n", resto);

    // Finaliza correctamente el programa
    return 0;
}