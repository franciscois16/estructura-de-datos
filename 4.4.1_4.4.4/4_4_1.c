#include <stdio.h>

void sumar(int *num1, int *num2, int *resultado);

int main() {
    int num1 = 1, num2 = 2, resultado = 0;


    sumar(&num1, &num2, &resultado);

    printf("La suma es: %d\n", resultado);

    return 0;
}

void sumar(int *num1, int *num2, int *resultado) {
    *resultado = *num1 + *num2;
}