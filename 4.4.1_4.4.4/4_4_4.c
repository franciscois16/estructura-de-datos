#include <stdio.h>
void valores(int x, int y, int *sum, int *prod);

int main() {
  int a = 2, b = 3, sum, prod;
  valores(a, b, &sum, &prod);
  
  printf("Suma: %d\n", sum);
  printf("Producto: %d\n", prod);
  
  return 0; 
}

void valores(int x, int y, int *sum, int *prod){
  *sum = x + y;
  *prod = x * y;
}