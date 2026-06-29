#include <stdio.h>

int main(void)
{
    // Declaración de la variable
    int dia;

    // Solicitar el número del día
    printf("Ingrese el numero del dia a consultar: ");
    scanf_s("%d", &dia);

    // Mostrar el día correspondiente
    switch (dia)
    {
        case 1:
            printf("Lunes\n");
            break;

        case 2:
            printf("Martes\n");
            break;

        case 3:
            printf("Miercoles\n");
            break;

        case 4:
            printf("Jueves\n");
            break;

        case 5:
            printf("Viernes\n");
            break;

        case 6:
            printf("Sabado\n");
            break;

        case 7:
            printf("Domingo\n");
            break;

        default:
            printf("Opcion invalida.\n");
            break;
    }

    // Finaliza correctamente el programa
    return 0;
}