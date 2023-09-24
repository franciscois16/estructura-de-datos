#include <stdio.h>

// representa un término de un polinomio
struct Termino {
    int coeficiente; 
    int exponente;   
};

// representa un polinomio
struct Polinomio {
    struct Termino terminos[10];//maximo de 10 terminos
    int grado; // grado del polinomio (el exponente más alto)
};