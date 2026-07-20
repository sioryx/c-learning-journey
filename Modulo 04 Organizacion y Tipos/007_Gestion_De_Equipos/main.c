#include <stdio.h>
#include <string.h>

#include "personaje.h"
#include "combate.h"
#include "equipo.h"

/* Busca y devuelve el primer personaje con vida dentro del equipo. */
Personaje* obtenerPrimerPersonajeVivo(Personaje* equipo, int cantidad);

int main(void)
{
    Personaje Heroe;
    inicializarPersonaje(&Heroe, "Cloud", 100, 25, Guerrero);

    Personaje goblin;
    inicializarPersonaje(&goblin, "Goblin Verde", 50, 10, Arquero);

    Personaje Jefe;
    inicializarPersonaje(&Jefe, "Rey arruinado", 5000, 300, Guerrero);

    Personaje equipo[4];

    inicializarPersonaje(&equipo[0], "Cloud", 100, 25, Guerrero);
    inicializarPersonaje(&equipo[1], "Tifa", 95, 20, Ladron);
    inicializarPersonaje(&equipo[2], "Barret", 120, 30, Guerrero);
    inicializarPersonaje(&equipo[3], "Aerith", 80, 15, Mago);

    int tamanio = sizeof(equipo) / sizeof(equipo[0]);

    /* Muestra los integrantes del equipo. */
    mostrarEquipo(equipo, tamanio);

    /* Muestra los personajes creados. */
    mostrarPersonaje(&goblin);
    mostrarPersonaje(&Heroe);
    mostrarPersonaje(&Jefe);

    /* Ejecuta un combate de prueba. */
    ejecutarCombate(&Heroe, &goblin);

    /* Verifica si existe al menos un personaje vivo. */
    if (hayPersonajesVivos(equipo, tamanio))
    {
        printf("Si hay personajes vivos.\n");
    }
    else
    {
        printf("No hay personajes vivos.\n");
    }

    /* Cuenta los personajes que permanecen con vida. */
    int personajesConVida = contarPersonajesVivos(equipo, tamanio);

    printf("Hay %d personajes vivos.\n", personajesConVida);

    /*
        Prueba realizada durante la depuración.

        El objetivo era comprobar que obtenerPersonaje()
        devolvía la dirección correcta del personaje solicitado.

        Finalmente se descubrió que el problema NO estaba
        en la función, sino en que el archivo principal
        no incluía:

            #include "equipo.h"

        Al agregar el encabezado correcto, el programa
        comenzó a funcionar como se esperaba.
    */
    Personaje* personaje = obtenerPersonaje(equipo, tamanio, 3);

    if (personaje == NULL)
    {
        printf("No existe un personaje en esa posicion.\n");
    }
    else
    {
        printf("Direccion esperada : %p\n", (void*)&equipo[3]);
        printf("Direccion obtenida : %p\n", (void*)personaje);

        printf("Nombre: %s\n", personaje->nombre);
        printf("Vida: %d\n", personaje->vida);

        mostrarPersonaje(personaje);
    }

    /* Obtiene el primer personaje vivo del equipo. */
    Personaje* personajeVivo = obtenerPrimerPersonajeVivo(equipo, tamanio);

    if (personajeVivo != NULL)
    {
        printf("Primer personaje vivo: %s\n", personajeVivo->nombre);
    }
    else
    {
        printf("No hay personajes vivos.\n");
    }

    return 0;
}

/* Recorre el equipo y devuelve un puntero al primer personaje con vida. */
Personaje* obtenerPrimerPersonajeVivo(Personaje* equipo, int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        if (equipo[i].vida > 0)
        {
            return &equipo[i];
        }
    }

    return NULL;
}