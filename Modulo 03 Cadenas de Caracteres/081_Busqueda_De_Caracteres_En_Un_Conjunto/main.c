#include <stdio.h>
#include <string.h>

int main(void)
{
    char nombre[100];

    printf("Ingrese el nombre del Digimon:\n");
    fgets(nombre, sizeof(nombre), stdin);

    /* Busca el primer carácter de la cadena que pertenezca
       al conjunto especificado (en este caso, los dígitos). */
    char* resultado = strpbrk(nombre, "0123456789");

    if (resultado != NULL)
    {
        printf("El nombre contiene numeros.\n");
    }
    else
    {
        printf("El nombre solo contiene letras.\n");
    }

    return 0;
}