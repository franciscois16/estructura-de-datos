#include <stdio.h>
void sort(int a[], int i, int j);
void intercambiar(int a[], int i, int j);

int main() {
    int A[] = {15, 8, 23, 72, 45, 4};
    int n = sizeof(A) / sizeof(A[0]);

    printf("Antes del ordenamiento: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    sort(A, 0, n - 1);

    printf("Despues del ordenamiento: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

void intercambiar(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void sort(int a[], int i, int j) {
    if (a[i] > a[j]) {
        intercambiar(a, i, j);
    }
    if (j <= i + 1) {
        return;
    }
    int k = (int)(1/3.0 * (j - i + 1));
    sort(a, i, j - k);
    sort(a, i + k, j);
    sort(a, i, j - k);
}