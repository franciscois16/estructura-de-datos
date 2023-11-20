#include <stdio.h>
int buscar(int arr[], int n, int x);


int main() {
  int arr[] = {1, 2, 3, 4, 5};
  
  int index = buscar(arr, 5, 3);
  
  if(index != -1){
    printf("Encontrado en posicion %d\n", index);
  } else {
    printf("No encontrado\n");
  }
  
  return 0;
}

int buscar(int arr[], int n, int x){
  int *p = arr;
  for(int i=0; i<n; i++){
    if(*(p+i) == x){
      return i;
    }
  }
  return -1;
}