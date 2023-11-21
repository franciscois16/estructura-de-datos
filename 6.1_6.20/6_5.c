void contarRepeticiones(int arr[], int n) {
   int count[10] = {0};
   for(int i = 0; i < n; i++) {
      count[arr[i]]++;  
   }
 
   for(int i = 0; i < 10; i++){
     if(count[i] != 0)
        printf("El numero %d se repite %d veces \n", i, count[i]);
   }
}