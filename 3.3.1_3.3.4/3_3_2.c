#include<stdio.h>

void bubble_sort(int arr[], int min,int max);
void selection_sort(int arr[], int min,int max);
void insertion_sort(int arr[], int min,int max);




void main(){
int B[] = {8,4,2,7,9,12,-45,3,-46,5,34,23,10,0,33,-10,-8,6};
int n = sizeof(B) / sizeof(B[0]);

// Llamadas a las funciones
bubble_sort(B, 0,7);
insertion_sort(B,8,13);
selection_sort(B,14,17);
for (int i = 0; i < 17; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
    
    return;
}






void bubble_sort(int arr[], int min,int max) {
    int i, j;
    for (i = min; i < max; i++) {
        for (j = min; j < max-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
  


}

void selection_sort(int arr[], int min,int max) {
    int i, j, min_idx;
    for (i = 0; i < max-1; i++) {
        min_idx = i;
        for (j = i+1; j < max; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    
}

void insertion_sort(int arr[], int min, int max) {
    int i, key, j;
    for (i = min + 1; i <= max; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= min && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

