#include <stdio.h>

void funcao1(int a){
  a++;
  printf("%d\n",a);
}

int funcao2(int a, int *b){
  int c;
  (*b)++;
  a = *b * 2;
  c = a + *b;
  return c;
}

int main(void){
  int x = 3;
  int a = 2, b, c;
  scanf("%d",&b);  // digita 3
  scanf("%d",&c);  // digita 0
  funcao1(a); // imprime 3
  printf("%d\n",a); // imprime 2 
  printf("%d\n",funcao2(a,&a)); // imprime 9
  printf("%d\n",b); // imprime 3
  printf("%d\n",c); // imprime 0
  printf("%d\n",a); // imprime 3
  return 0;
}
