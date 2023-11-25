int existeSubconjuntoSumaK(int arr[], int n, int k) {
    int suma = 0;
    int inicio = 0;

    for (int fin = 0; fin < n; fin++) {
        suma += arr[fin];

        while (suma > k) {
            suma -= arr[inicio];
            inicio++;
        }
        // Verificar si se encontró un subconjunto con la suma deseada.
        if (suma == k) {
            return 1; // Verdadero
        }
    }
    return 0; // Falso
}
