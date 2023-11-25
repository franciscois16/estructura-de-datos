#include <stdio.h>

void imprimirArreglo(int arr[], int inicio,int fin);
void ordenarPorBurbuja(int arr[], int inicio, int fin);
void ordenarPorInsercion(int arr[], int inicio, int fin);
void ordenarPorSeleccion(int arr[], int inicio, int fin);

int main() {
    int B[] = {8, 4, 2, 7, 9, 12, -45, 3, -46, 5, 34, 23, 10, 0, 33, -10, -8, 6};
    int n = sizeof(B) / sizeof(B[0]);

    // Burbuja en el rango [0..7].
    printf("Ordenamiento por Burbuja:\n");
    ordenarPorBurbuja(B, 0, 7);

    // Inserción en el rango [8..13].
    printf("\nOrdenamiento por Insercion:\n");
    ordenarPorInsercion(B, 8, 13);

    // Selección en el rango [14..17].
    printf("\nOrdenamiento por Seleccion:\n");
    ordenarPorSeleccion(B, 14, 17);

    return 0;
}

void imprimirArreglo(int arr[], int inicio, int fin) {
    for (int i = inicio; i <= fin; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void ordenarPorBurbuja(int arr[], int inicio, int fin) {
    int n = fin - inicio + 1;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j + inicio] > arr[j + 1 + inicio]) {
                int temp = arr[j + inicio];
                arr[j + inicio] = arr[j + 1 + inicio];
                arr[j + 1 + inicio] = temp;

                imprimirArreglo(arr, inicio, fin);
            }
        }
    }
}

void ordenarPorInsercion(int arr[], int inicio, int fin) {
    int n = fin - inicio + 1;

    for (int i = 1; i < n; i++) {
        int clave = arr[i + inicio];
        int j = i - 1;

        while (j >= 0 && arr[j + inicio] > clave) {
            arr[j + 1 + inicio] = arr[j];
            j--;

            imprimirArreglo(arr, inicio, fin);
        }

        arr[j + 1 + inicio] = clave;

        imprimirArreglo(arr, inicio, fin);
    }
}

void ordenarPorSeleccion(int arr[], int inicio, int fin) {
    int n = fin - inicio + 1;

    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j + inicio] < arr[minIdx + inicio]) {
                minIdx = j;
            }
        }

        int temp = arr[minIdx + inicio];
        arr[minIdx + inicio] = arr[i + inicio];
        arr[i + inicio] = temp;

        imprimirArreglo(arr, inicio, fin);
    }
}