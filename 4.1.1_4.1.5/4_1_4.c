#include <stdio.h>
//representa una carta
struct carta
{
    char tipo[10];
    int numero;
};


struct mano
{
    struct carta cartas[5]; // cada mano tendra un total de 5 cartas 
};

