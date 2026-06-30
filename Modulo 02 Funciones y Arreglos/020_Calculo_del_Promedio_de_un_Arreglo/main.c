#include <stdio.h>

float calcularPromedio(float suma, float cantidadElementos);

int main(void) {

    float suma = 0;
    int danio[5] = { 32, 30, 27, 35, 31 };
    int cantidadElementos = 5;

    for (int i = 0; i < cantidadElementos; i++) {
        suma += danio[i];
    }

    printf("Daño promedio de tus ataques: %.2f\n",
           calcularPromedio(suma, cantidadElementos));

    return 0;
}

// Calcula el promedio a partir de la suma total y la cantidad de elementos.
float calcularPromedio(float suma, float cantidadElementos) {
    return suma / cantidadElementos;
}