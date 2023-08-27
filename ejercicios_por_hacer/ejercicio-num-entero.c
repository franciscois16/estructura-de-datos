#include <stdio.h>
#include <math.h>

int par(int n);
int impar(int n);

int main(void) {
    int a = 2;
    int n = 6; 
    int result = par(n);
 
    return result;
}

int par(int n) {
    if (n==0)
    {
        return 1;
    }
    
    
    return impar(n-1);
}

int impar(n){
    if (n==0)
    {
        return 0;
    }
    
    return par(n-1);
}