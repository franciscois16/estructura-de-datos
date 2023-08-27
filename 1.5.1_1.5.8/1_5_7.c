#include <stdio.h>

int invertir_numero(int numero) {
    int resultado = 0;

    while (numero != 0) {
        int digito = numero % 10; // aqui se obtiene el ultimo digito
        resultado = resultado * 10 + digito; // se agrega el ultimo digito al resultado
        numero = numero / 10; // elemino el ultimo digito agregado al resultado
    }

    return resultado;
}

int main() {
    int numero = 12345;

    int numero_invertido = invertir_numero(numero);

    printf("numero invertido: %d\n", numero_invertido);

    return 0;
}
