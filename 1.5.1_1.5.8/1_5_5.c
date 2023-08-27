#include <stdio.h>
#include <limits.h> // uso esta libreria para que el codigo funcione correctamente
//igualmente supongo que al referirse al segundo elemento se refiero al 2do numero menor y no al segundo elemento del arreglo por lo que los numeros repetidos no afectarian

int segundo_menor(int arr[], int size) {
    int primerMenor = INT_MAX;
    int segundoMenor = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] < primerMenor) {
            segundoMenor = primerMenor;
            primerMenor = arr[i];
        } else if (arr[i] < segundoMenor && arr[i] != primerMenor) {
            segundoMenor = arr[i];
        }
    }

    return segundoMenor;
}

int main() {
    int myArray[] = {5, 2, 8, 1, 9, 3};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    int segundo_menor_numero = segundo_menor(myArray, size);

    printf("El segundo menor elemento del arreglo es: %d\n", segundo_menor_numero);

    return 0;
}
