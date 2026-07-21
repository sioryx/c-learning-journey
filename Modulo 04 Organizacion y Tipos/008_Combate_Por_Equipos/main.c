#include <stdio.h>
#include <string.h>

#include "personaje.h"
#include "combate.h"
#include "equipo.h"
void ejecutarCombateEquipos(Personaje* equipo, Personaje* Enemigos, int tamanio);

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

    Personaje equipoEnemigos[4];
    inicializarPersonaje(&equipoEnemigos[0], "Orco", 300, 30, Guerrero);
    inicializarPersonaje(&equipoEnemigos[1], "Goblin", 150, 10, Ladron);
    inicializarPersonaje(&equipoEnemigos[2], "Lobo", 120, 15, Guerrero);
    inicializarPersonaje(&equipoEnemigos[3], "Chaman", 80, 30, Mago);

    int tamanio = sizeof(equipo) / sizeof(equipo[0]);


    mostrarEquipo(equipo, tamanio);


    mostrarPersonaje(&goblin);
    mostrarPersonaje(&Heroe);
    mostrarPersonaje(&Jefe);


    ejecutarCombate(&Heroe, &goblin);

    if (hayPersonajesVivos(equipo, tamanio))
    {
        printf("Si hay personajes vivos.\n");
    }
    else
    {
        printf("No hay personajes vivos.\n");
    }


    int personajesConVida = contarPersonajesVivos(equipo, tamanio);

    printf("Hay %d personajes vivos.\n", personajesConVida);

    Personaje* personaje = obtenerPersonaje(equipo, tamanio, 3);

    if (personaje == NULL)
    {
        printf("No existe un personaje en esa posicion.\n");
    }
    else
    {
       mostrarPersonaje(personaje);
    }


    Personaje* personajeVivo = obtenerPrimerPersonajeVivo(equipo, tamanio);

    if (personajeVivo != NULL)
    {
        printf("Primer personaje vivo: %s\n", personajeVivo->nombre);
    }
    else
    {
        printf("No hay personajes vivos.\n");
    }
    ejecutarCombateEquipos(equipo, equipoEnemigos, tamanio);

    return 0;
}


