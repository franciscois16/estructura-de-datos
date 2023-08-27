#include <stdio.h>

int facto(int n, int m);

int main(void) {
    int n = 5;
    int m = 1; // Inicializamos m a 1 para el cálculo del factorial
    int result = facto(n, m);
    printf("El factorial de %d es: %d\n", n, result);
    return 0;
}

int facto(int n, int m) {
    if (n > 1) {
        return facto(n - 1, n * m);
    } else {
        return m;
    }
}
