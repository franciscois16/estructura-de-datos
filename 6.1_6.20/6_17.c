#include <stdio.h>

void intercambiar(int* a, int* b);
int particion(int arr[], int bajo, int alto);
void quickSort(int arr[], int bajo, int alto);

int main() {
    int B[] = {8, 4, 2, 7, 9, 12, -45, 3, -46, 5, 34, 23, 10, 0, 33, -10, -8, 6};
    int n = sizeof(B) / sizeof(B[0]);

    printf("Antes de QuickSort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    quickSort(B, 0, n - 1);

    printf("Despues de QuickSort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}

void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particion(int arr[], int bajo, int alto) {
    int pivote = arr[alto];
    int i = bajo - 1;

    for (int j = bajo; j < alto; j++) {
        if (arr[j] <= pivote) {
            i++;
            intercambiar(&arr[i], &arr[j]);
        }
    }

    intercambiar(&arr[i + 1], &arr[alto]);
    return i + 1;
}

void quickSort(int arr[], int bajo, int alto) {
    if (bajo < alto) {
        int indiceParticion = particion(arr, bajo, alto);

        quickSort(arr, bajo, indiceParticion - 1);
        quickSort(arr, indiceParticion + 1, alto);
    }
}