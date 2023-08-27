#include <stdio.h>

void imprimir_binario(int numero) {
    if (numero == 0) {
        printf("0"); // en caso de ser 0
        return;
    }

    int bits[32]; // Arreglo que almacena los bits
    int i = 0;

    // Obtener los bits del número
    while (numero > 0) {
        bits[i] = numero % 2;
        numero = numero / 2; 
        i++;
    }
    

    // Imprimir los bits en orden inverso
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]);
    }
}

int main() {
    int numero=100;

    printf("numero en binario: ");
    imprimir_binario(numero);
   

    return 0;
}
