#include <stdio.h>
#include <string.h>  // Biblioteca para strings
#define MAX 2000  

int main(void){
  char palavra[MAX]; 
  int i, j, N; 
  printf("Escreva uma Palavra: ");
  scanf("%s",palavra);   
  N = strlen(palavra);   // strlen retorna o tamanho da palavra
  j = N-1;
  for (i=0; i<N; i++){
    if (palavra[i]==palavra[j])  // Analisando se a palavra é igual ao inverso dela        
      j--;                      
    else{    // Caso em algum ponto ela não ser igual ao inverso dela, ela não será um palíndromo
      printf("\n%s não é um Palíndromo",palavra);
      return 0;
    }
  }   // Como a palavra é igual ao inverso dela, ela é palíndromo
  printf("\n%s é um Palíndromo",palavra);
  return 1;
}
