#include <stdio.h>

// Declaraciones de funciones
void hanoi(int n, char origen, char destino, char auxiliar);

// Función principal
int main() {
    int n=3;
    printf("Ingrese el numero de discos: ");
    
    printf("Pasos para resolver las Torres de Hanoi con %d discos:\n", n);
    hanoi(n, 'A', 'C', 'B');

    return 0;
}

// Implementación de funciones

void hanoi(int n, char origen, char destino, char auxiliar) {
    if (n == 1) {
        printf("Mover disco 1 desde %c hacia %c\n", origen, destino);
        return;
    }

    hanoi(n - 1, origen, auxiliar, destino);
    printf("Mover disco %d desde %c hacia %c\n", n, origen, destino);
    hanoi(n - 1, auxiliar, destino, origen);
}
