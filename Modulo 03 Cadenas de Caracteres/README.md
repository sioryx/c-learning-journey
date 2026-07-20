# Módulo 03 - Punteros y Cadenas

## Introducción

Este módulo representa uno de los cambios más importantes en el aprendizaje del lenguaje C. Después de dominar funciones y arreglos, se introducen los punteros como mecanismo para acceder y manipular directamente la memoria.

A partir de este punto, el curso evoluciona hacia la manipulación eficiente de cadenas de caracteres, comenzando con algoritmos implementados manualmente para comprender su funcionamiento interno y finalizando con el uso de las funciones proporcionadas por la biblioteca estándar del lenguaje (`string.h`).

El módulo concluye con una introducción a la manipulación de bloques de memoria, estableciendo las bases para temas posteriores como estructuras de datos, memoria dinámica y desarrollo de bibliotecas propias.

---

# Objetivos

Al finalizar este módulo se desarrollaron las habilidades necesarias para:

- Comprender el funcionamiento de los punteros.
- Manipular variables mediante referencias.
- Utilizar aritmética de punteros.
- Procesar arreglos utilizando punteros.
- Manipular cadenas de caracteres.
- Implementar manualmente funciones clásicas de `string.h`.
- Comparar implementaciones propias con la biblioteca estándar.
- Resolver problemas prácticos mediante procesamiento de texto.
- Introducir la manipulación de memoria mediante bloques.

---

# Conceptos aprendidos

## 1. Punteros

- Declaración de punteros.
- Operadores `&` y `*`.
- Paso por referencia.
- Modificación de variables mediante punteros.
- Intercambio de valores.
- Retorno de múltiples valores.
- Aritmética de punteros.
- Punteros y arreglos.
- Recorrido de arreglos mediante punteros.

---

## 2. Cadenas de caracteres

- Declaración de cadenas.
- Recorrido de cadenas.
- Procesamiento carácter por carácter.
- Conteo de caracteres.
- Conteo de vocales.
- Conteo de consonantes.
- Conversión de mayúsculas y minúsculas.
- Inversión de cadenas.
- Palíndromos.
- Concatenación.
- Comparación.
- Validación de contenido.

---

## 3. Implementación de funciones estándar

Con el objetivo de comprender el funcionamiento interno de la biblioteca estándar se implementaron versiones propias de diversas funciones.

Entre ellas:

- miStrlen
- miStrcpy
- miStrcmp
- miStrUpper
- miStrLower
- miStrToggle
- miStrTrim
- miStrStartsWith
- miStrEndsWith
- miStrContains
- miStrReplace
- miStrReplaceAll

---

## 4. Biblioteca estándar (`string.h`)

Se estudiaron y aplicaron las funciones oficiales del lenguaje:

### Manipulación

- strlen()
- strcpy_s()
- strncpy_s()
- strcat_s()
- strncat_s()

### Comparación

- strcmp()
- strncmp()

### Búsqueda

- strchr()
- strrchr()
- strstr()
- strpbrk()

### Validación

- strspn()
- strcspn()

### Tokenización

- strtok_s()

---

## 5. Manipulación de memoria

Introducción a las operaciones sobre bloques de memoria.

- memcpy_s()
- memmove_s()
- memcmp()
- memset()

---

# Habilidades desarrolladas

Durante este módulo se fortalecieron competencias fundamentales para la programación en C:

- Comprensión del modelo de memoria.
- Uso correcto de punteros.
- Manipulación eficiente de arreglos y cadenas.
- Diseño de algoritmos sobre texto.
- Reutilización de código.
- Implementación de bibliotecas propias.
- Comparación crítica entre implementaciones.
- Uso de funciones estándar del lenguaje.
- Introducción al procesamiento de memoria.

---

# Evolución del aprendizaje

El aprendizaje del módulo siguió una progresión cuidadosamente estructurada.

## Primera etapa — Comprensión de punteros

Los primeros ejercicios estuvieron dedicados a comprender el funcionamiento de la memoria mediante punteros.

### Implementación

- Declaración.
- Referencias.
- Paso por referencia.
- Aritmética de punteros.
- Recorrido de arreglos.

### Aplicaciones

- Intercambio de variables.
- Retorno múltiple.
- Procesamiento de arreglos.

### Reforzamiento

Diversos ejercicios de evaluación consolidaron el dominio de los punteros antes de avanzar al siguiente bloque.

---

## Segunda etapa — Manipulación de cadenas

Una vez dominados los punteros, se utilizaron para trabajar directamente con cadenas de caracteres.

### Implementación

- Recorrido.
- Longitud.
- Conteo.
- Conversión.
- Comparación.
- Concatenación.
- Validación.

### Aplicaciones

- Palíndromos.
- Procesamiento de texto.
- Generación de títulos.
- Validación de usuarios.
- Validación de credenciales.

---

## Tercera etapa — Construcción de una biblioteca propia

Con el objetivo de comprender el funcionamiento interno de `string.h`, se desarrollaron implementaciones propias de las funciones más utilizadas.

### Implementación

- miStrlen
- miStrcpy
- miStrcmp
- miStrUpper
- miStrLower
- miStrToggle
- miStrTrim
- miStrStartsWith
- miStrEndsWith
- miStrContains
- miStrReplace
- miStrReplaceAll

### Comparación

Cada implementación fue contrastada posteriormente con la función oficial correspondiente, analizando diferencias de comportamiento y buenas prácticas.

---

## Cuarta etapa — Biblioteca estándar

Una vez comprendidos los algoritmos internos, se estudiaron las funciones oficiales de `string.h`.

Esto permitió apreciar las ventajas de utilizar implementaciones optimizadas y estandarizadas.

---

## Quinta etapa — Manipulación de memoria

El módulo concluye con una introducción a las funciones que operan directamente sobre bloques de memoria.

Estas herramientas representan el puente hacia temas más avanzados como:

- estructuras
- archivos binarios
- memoria dinámica
- bibliotecas propias
- administración de memoria

---

# Conclusiones

Este módulo constituye uno de los pilares del aprendizaje del lenguaje C.

Los conceptos desarrollados aquí permiten comprender cómo el lenguaje manipula la memoria y cómo se construyen internamente muchas de las funciones utilizadas diariamente.

La implementación manual de funciones clásicas, seguida de su comparación con la biblioteca estándar, proporciona una comprensión mucho más profunda del lenguaje y prepara el camino para el desarrollo de bibliotecas propias y proyectos de mayor complejidad.

Los conocimientos adquiridos en este módulo serán fundamentales para abordar estructuras (`struct`), archivos, memoria dinámica y el proyecto final del curso.