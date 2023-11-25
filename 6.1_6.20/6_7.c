#include <stdio.h>
void trazo(int x1, int y1, int x2, int y2);
void pinta(int i, int d, int n);


int main() {
    pinta(1,7,3);
    return 0;
}
void trazo(int x1, int y1, int x2, int y2) {
    printf("Linea de coordenadas cartersianas (%d,%d) a (%d,%d)\n", x1, y1, x2, y2);
}

void pinta(int i, int d, int n) {
    if(n < 1)
        return;
    int m = (i+d)/2;
    trazo(m,15,m,15-n*5);
    pinta(i,m-1,n-1);
    pinta(m+1,d,n-1);
}