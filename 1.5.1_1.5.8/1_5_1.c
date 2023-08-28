#include <stdio.h>

void print_arreglo(int a[], int count) {
    for (int i = 0; i < count; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int count = sizeof(myArray) / sizeof(myArray[0]); // Calculamos el número de elementos en el arreglo

    printf("Arreglo: ");
    print_arreglo(myArray, count);

    return 0;
}
