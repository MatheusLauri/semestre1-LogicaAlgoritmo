#include <stdio.h>

int main(void) {
  int n1;
  
  printf("escreve um numero entre 10 e 20: ");
  scanf("%d",&n1);

    while(n1 < 10 || n1 > 20)
      {
          printf("escreve um numero entre 10 e 20: ");
          scanf("%d",&n1);
      }
  return 0;
}