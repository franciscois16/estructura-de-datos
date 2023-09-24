#include <stdio.h>

// estructura para almacenar una nota
struct Nota {
    char nombre_materia[50];
    float notas[5]; // puede tener hasta 5 notas cada estudiante
};

// estructura para representar un estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    struct Nota notas_materia[5]; 
};                              