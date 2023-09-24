#include <stdio.h>

//representa un documento
struct Documento {
    int id;
    char titulo[100];
    char contenido[1000];
};