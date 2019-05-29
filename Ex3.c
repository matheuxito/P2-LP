#include <stdio.h>
#define MAX 100

int main(void){
  int matriz[MAX][MAX];
  int i, j, M, N, menorelemento, menorlinha, minmax = 0;    /// M: linha, N: coluna
  scanf("%d%d",&M,&N);
  for (i=0; i<M; i++){
    for (j=0; j<N; j++){
      scanf("%d",&matriz[i][j]);
    }
  }
  menorelemento = matriz[0][0];  /// Atribuindo o primeiro valor da matriz como menor elemento da matriz para que haja base na busca do menor elemento da matriz
  for (i=0; i<M; i++){
    for (j=0; j<N; j++){
      if (matriz[i][j] < menorelemento){
        menorelemento = matriz[i][j];
        menorlinha = i;    /// Atribuindo a linha atual como linha do menor elemento da matriz
      } 
    }
  }   /// Agora que temos a linha do menor elemento da matriz, buscaremos o maior elemento pertencente à está linha
  i = menorlinha;
  for (j=0; j<N; j++){             /// Análise das colunas pertencente a linha do menor elemento da matriz
    if (matriz[i][j] > minmax){
      minmax = matriz[i][j];
    }
  }
  printf("%d",minmax);
  return 0;
}
