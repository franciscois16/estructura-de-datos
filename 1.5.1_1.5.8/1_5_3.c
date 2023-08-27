#include <stdio.h>

void par_impar(int arr[], int size) {
    
    // Recorremos el arreglo
    for (int i = 0; i < size; i++) {// Verificamos si el elemento actual ya se contó como duplicado

        if (arr[i]%2==1)
        {
            printf("%d",arr[i]);
            printf("\n");
        }
          
    }
    return ;
}

int main() {
    int myArray[] = {1, 2, 3, 2, 4, 2, 4, 7};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    par_impar(myArray,size);

    return 0;
}