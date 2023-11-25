#include <stdio.h>

// Declaraciones de funciones
void merge(int arr[], int izquierda, int medio, int derecha);
void mergeSort(int arr[], int izquierda, int derecha);

// Función principal
int main() {
    int B[] = {8, 4, 2, 7, 9, 12, -45, 3, -46, 5, 34, 23, 10, 0, 33, -10, -8, 6};
    int n = sizeof(B) / sizeof(B[0]);

    printf("Antes de MergeSort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    // Llamada a la función de ordenamiento
    mergeSort(B, 0, n - 1);

    printf("Despues de MergeSort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}

// Implementación de funciones

void merge(int arr[], int izquierda, int medio, int derecha) {
    int n1 = medio - izquierda + 1;
    int n2 = derecha - medio;

    // Crear arreglos temporales
    int L[n1], R[n2];

    // Copiar datos a los arreglos temporales L[] y R[]
    for (int i = 0; i < n1; i++) {
        L[i] = arr[izquierda + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[medio + 1 + j];
    }

    // Fusionar los arreglos temporales en el arreglo original arr[]
    int i = 0; // Índice inicial del primer subarreglo
    int j = 0; // Índice inicial del segundo subarreglo
    int k = izquierda; // Índice inicial del arreglo fusionado

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiar los elementos restantes de L[], si los hay
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copiar los elementos restantes de R[], si los hay
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int izquierda, int derecha) {
    if (izquierda < derecha) {
        // Encuentra el punto medio del arreglo
        int medio = izquierda + (derecha - izquierda) / 2;

        // Ordena la primera y segunda mitad
        mergeSort(arr, izquierda, medio);
        mergeSort(arr, medio + 1, derecha);

        // Combina las mitades ordenadas
        merge(arr, izquierda, medio, derecha);
    }
}
