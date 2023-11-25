#include <stdio.h>
void intercambiar(int* a, int* b);

int main() {
    int A = 4;
    int B = 5;
    printf("Antes del intercambio: A=%d, B=%d\n", A, B);
    intercambiar(&A, &B);
    printf("Despues del intercambio: A=%d, B=%d\n", A, B);
    return 0;
}

void intercambiar(int* a, int* b) {
    *a = *a + *b; 
    *b = *a - *b;  
    *a = *a - *b;
}