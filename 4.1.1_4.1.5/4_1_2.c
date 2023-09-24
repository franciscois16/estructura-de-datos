#include <stdio.h>

// almacena la información de una matrícula
struct Matricula {
    char numero[10];
    char pais[10];
};

// representa un automóvil
struct Automovil {
    char marca[20];
    char modelo[20];
    int annoFabricacion;
    struct Matricula matricula;
};