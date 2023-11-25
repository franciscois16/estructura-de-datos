int encuentraIndiceIgualValor(int arr[], int inicio, int fin) {
    if (inicio > fin) {
        return -1;  // No se encontró ningún índice igual al valor.
    }

    int medio = inicio + (fin - inicio) / 2;

    if (arr[medio] == medio) {
        return medio;  // Se encontró un índice igual al valor.
    } else if (arr[medio] > medio) {
        return encuentraIndiceIgualValor(arr, inicio, medio - 1);
    } else {
        return encuentraIndiceIgualValor(arr, medio + 1, fin);
    }
}