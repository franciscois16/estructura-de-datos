#include <stdio.h>

void print_array(int a[], int count) {
    for (int i = 0; i < count; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int count = sizeof(myArray) / sizeof(myArray[0]); // Calculamos el número de elementos en el arreglo

    printf("Arreglo: ");
    print_array(myArray, count);

    return 0;
}
