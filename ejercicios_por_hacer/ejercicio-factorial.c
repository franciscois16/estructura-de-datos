#include <stdio.h>
#include <math.h>

int pot(int a, int n);

int main(void) {
    int a = 2;
    int n = 5; // Inicializamos m a 1 para el cálculo del factorial
    int result = pot(a, n);
    printf("El elevado es: %d\n", result);
    return 0;                                                   
}

int pot(int a, int n) {
    int b;
    b = pot(a,n/2);
    if (n == 0) {

        return n==1;
    }
    if (n==1)
    {
        return n==a;
    }
    
    if (n%2==0)
    {
       
        return b*b;
    }
    
    return a*b*b;
    
}
