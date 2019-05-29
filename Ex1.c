#include <stdio.h>
#define MAX 100

int main(void){
  int seq[MAX];
  int i, N;    /// N = Tamanho da Sequência
  scanf("%d",&N);
  for (i=0; i<N; i++){
    scanf("%d",&seq[i]);   /// Leitura da Sequência
  }
  for (i=N-1; i>=0; i--){    /// 'i' vai da última posição do vetor até a primeira
    printf("%d ",seq[i]);    /// Imprimindo o número na posição 'i' da sequência
  }
}
