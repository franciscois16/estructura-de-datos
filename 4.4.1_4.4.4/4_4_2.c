#include <stdio.h>
void printArray(int arr[], int n);

int main() {
  int arr[] = {1, 2, 3, 4, 5}; 
  printArray(arr, 5);
  
  return 0;
}

void printArray(int arr[], int n){
  int *p = arr;
  for(int i=0; i<n; i++){
    printf("%d ", *(p+i)); 
  }
}