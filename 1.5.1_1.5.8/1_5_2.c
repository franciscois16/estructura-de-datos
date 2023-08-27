#include <stdio.h>

int cont_duplicados(int arr[], int size) {
    int contador = 0;

    // Recorremos el arreglo
    for (int i = 0; i < size - 1; i++) {// Verificamos si el elemento actual ya se contó como duplicado
        if (arr[i] == -1) {
            continue;
        }

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                contador++;// Marcar el elemento como duplicado para no contar nuevamente
                arr[j] = -1;
            }
        }
    }

    return contador;
}

int main() {
    int myArray[] = {1, 2, 3, 2, 4, 2, 4, 6};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    int contotal = cont_duplicados(myArray, size);

    printf("Numero total de elementos duplicados: %d\n", contotal);

    return 0;
}
