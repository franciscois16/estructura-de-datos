#include <stdio.h>

void eliminar_elemento(int arr[], int *size, int posicion) {
    if (posicion < 0 || posicion >= *size) {
        printf("Posición fuera de rango\n");
        return;
    }

    for (int i = posicion; i < *size - 1; i++) {
        arr[i] = arr[i + 1]; // Copia el elemento siguiente en la posición actual
    }

    (*size)--; // Decrementa el tamaño del arreglo
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    int posicion_a_eliminar = 2; // Por ejemplo, eliminaremos el elemento en la posición 2 (3)
    eliminar_elemento(myArray, &size, posicion_a_eliminar);

    printf("Arreglo después de eliminar el elemento en la posición %d:\n", posicion_a_eliminar);
    for (int i = 0; i < size; i++) {//ahora que size se modifico se imprimen solo 4 elemntos
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}
