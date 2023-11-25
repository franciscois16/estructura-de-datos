#include <stdio.h>
#include <string.h>

struct datos {
    char nombre[40];
    char pais[25];
};

struct atleta {
    char deporte[30];
    struct datos pers;
    int nmedallas;
};

struct atleta ats[30];

struct atleta encontrarAtletaMasMedallas() {
    struct atleta masMedallas = ats[0];

    for (int i = 1; i < 30; i++) {
        if (ats[i].nmedallas > masMedallas.nmedallas) {
            masMedallas = ats[i];
        }
    }

    return masMedallas;
}

