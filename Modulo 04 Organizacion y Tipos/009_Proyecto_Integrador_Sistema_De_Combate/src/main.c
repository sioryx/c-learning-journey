#include <stdio.h>
#include <string.h>

#include "personaje.h"
#include "combate.h"
#include "equipo.h"
#include "Interfaz.h"

int main(void)
{
   
    Personaje equipo[MAX_PERSONAJES];

    inicializarPersonaje(&equipo[0], "Cloud", 100, 25, Guerrero);
    inicializarPersonaje(&equipo[1], "Tifa", 95, 20, Ladron);
    inicializarPersonaje(&equipo[2], "Barret", 120, 30, Guerrero);
    inicializarPersonaje(&equipo[3], "Aerith", 80, 15, Mago);

    Personaje equipoEnemigos[MAX_PERSONAJES];
    inicializarPersonaje(&equipoEnemigos[0], "Orco", 300, 30, Guerrero);
    inicializarPersonaje(&equipoEnemigos[1], "Goblin", 150, 10, Ladron);
    inicializarPersonaje(&equipoEnemigos[2], "Lobo", 120, 15, Guerrero);
    inicializarPersonaje(&equipoEnemigos[3], "Chaman", 80, 30, Mago);

    int tamanio = sizeof(equipo) / sizeof(equipo[0]);


    mostrarEquipo(equipo, tamanio);

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


