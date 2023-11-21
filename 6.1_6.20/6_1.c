int palindromo(char palabra[], int i, int j) {
  if(i >= j) return 1;
  
  if(palabra[i] != palabra[j]) 
    return 0;
    
  return palindromo(palabra, i+1, j-1);
}