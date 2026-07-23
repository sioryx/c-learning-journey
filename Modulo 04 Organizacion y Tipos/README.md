# Módulo 04 - Organización y Tipos Definidos por el Usuario

## Descripción

En este módulo el curso da un paso importante hacia el desarrollo de software estructurado. Hasta este punto los programas se desarrollaban principalmente en un solo archivo fuente, utilizando variables, funciones y la biblioteca estándar del lenguaje C.

A partir de este módulo se introduce la organización de proyectos mediante múltiples archivos (`.c` y `.h`), el uso de estructuras (`struct`), tipos definidos por el usuario (`typedef`), enumeraciones (`enum`) y la separación lógica del código en módulos independientes.

Como proyecto integrador se desarrolla un pequeño sistema de combate inspirado en videojuegos RPG, el cual sirve como escenario para aplicar todos los conceptos aprendidos durante el módulo.

---

# Objetivos

- Comprender el uso de estructuras (`struct`) para representar entidades complejas.
- Utilizar `typedef` para simplificar la definición de tipos.
- Definir y utilizar enumeraciones (`enum`).
- Separar un programa en módulos reutilizables.
- Implementar archivos de cabecera (`.h`) y archivos fuente (`.c`).
- Aprender a organizar proyectos de mediana escala.
- Trabajar con arreglos de estructuras.
- Manipular estructuras mediante punteros.
- Diseñar funciones que operen sobre colecciones de estructuras.
- Integrar todos los conceptos mediante un proyecto práctico.

---

# Conceptos aprendidos

Durante este módulo se estudiaron los siguientes temas:

- Estructuras (`struct`)
- `typedef`
- Enumeraciones (`enum`)
- Archivos de cabecera
- Archivos fuente
- Modularización
- Separación de responsabilidades
- Arreglos de estructuras
- Punteros a estructuras
- Funciones que reciben y devuelven punteros
- Gestión de equipos
- Organización de proyectos

---

# Estructura del módulo

```
001_Primer_Struct
002_Validación_Typedef
003_Enumeraciones
004_Implementacion_De_Modulos
005_Integracion_Modulo_Equipo
006_Arrays_Estructuras
007_Gestion_De_Equipos
008_Combate_Por_Equipos
009_Proyecto_Integrador_Sistema_De_Combate
```

Cada carpeta contiene el proyecto correspondiente a la lección, incluyendo todos los archivos fuente y de cabecera necesarios para su compilación.

---

# Evolución del aprendizaje

Este módulo fue desarrollado siguiendo una progresión gradual.

## 1. Modelado de datos

El primer paso consistió en aprender a representar información mediante estructuras (`struct`), agrupando diferentes atributos relacionados dentro de un mismo tipo de dato.

---

## 2. Creación de tipos personalizados

Posteriormente se incorporó `typedef`, permitiendo crear tipos más legibles y fáciles de reutilizar.

---

## 3. Enumeraciones

Se añadieron enumeraciones para representar conjuntos de valores constantes, mejorando la legibilidad y evitando el uso de números mágicos.

---

## 4. Modularización

El proyecto dejó de estar contenido en un único archivo para dividirse en varios módulos independientes.

Se aprendió a utilizar:

- archivos `.h`
- archivos `.c`
- directivas `#include`
- declaraciones y definiciones
- separación de responsabilidades

---

## 5. Gestión de estructuras

Una vez creados los módulos, comenzaron a desarrollarse funciones especializadas para manipular estructuras.

Entre ellas:

- inicialización de personajes
- impresión de información
- validaciones
- búsqueda de personajes
- conteo de personajes
- obtención de personajes mediante punteros

---

## 6. Arreglos de estructuras

El siguiente paso fue trabajar con colecciones completas de personajes, aprendiendo a recorrer arreglos de estructuras y desarrollar funciones reutilizables para administrarlos.

---

## 7. Integración del sistema

Finalmente todos los módulos fueron integrados en un pequeño sistema de combate por turnos, donde interactúan diferentes componentes del proyecto.

Este proyecto permitió aplicar simultáneamente todos los conocimientos adquiridos durante el módulo.

---

# Habilidades desarrolladas

Al finalizar este módulo se desarrollaron habilidades para:

- Diseñar estructuras de datos.
- Organizar proyectos en múltiples archivos.
- Implementar módulos reutilizables.
- Trabajar con punteros a estructuras.
- Gestionar arreglos de estructuras.
- Separar responsabilidades entre componentes.
- Diseñar interfaces mediante archivos de cabecera.
- Depurar problemas relacionados con la organización del proyecto.
- Integrar múltiples módulos dentro de una aplicación funcional.

---

# Proyecto integrador

El módulo culmina con un pequeño sistema de combate desarrollado completamente en C.

El proyecto integra:

- Personajes
- Clases
- Equipos
- Combate
- Gestión de personajes
- Modularización
- Arreglos de estructuras
- Punteros
- Funciones reutilizables

Este proyecto representa el primer programa del curso con una arquitectura modular, sirviendo como transición entre ejercicios individuales y proyectos de software de mayor complejidad.

---

# Conclusión

Este módulo marca una transición importante dentro del curso.

Mientras que los módulos anteriores estuvieron enfocados principalmente en aprender la sintaxis y las características del lenguaje C, este módulo introduce principios fundamentales de organización y diseño de software.

Los conocimientos adquiridos constituyen la base para desarrollar aplicaciones más grandes, mantenibles y reutilizables, preparando el camino para los siguientes módulos del curso.