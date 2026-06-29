#include <stdio.h>

int main(void)
{
    // Declaración de la variable
    int opcion;

    // Mostrar el menú
    printf("Por favor seleccione una opcion:\n");
    printf("1.- Consultar saldo\n");
    printf("2.- Depositar\n");
    printf("3.- Retirar\n");

    // Leer la opción seleccionada
    scanf_s("%d", &opcion);

    // Evaluar la opción mediante la estructura switch
    switch (opcion)
    {
        case 1:
            printf("Consultando saldo...\n");
            break;

        case 2:
            printf("Deposite el efectivo.\n");
            break;

        case 3:
            printf("Digite el monto a retirar.\n");
            break;

        default:
            printf("Opcion no valida.\n");
            break;
    }

    // Finaliza correctamente el programa
    return 0;
}