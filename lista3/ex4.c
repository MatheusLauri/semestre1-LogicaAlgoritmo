#include <stdio.h>

int main(void) {
  
  int i = 1;
  int soma = 0;

  while (i <= 10)
    {
      int n1;
      printf("Me de um numero: ");
      scanf("%d",&n1);

      soma += n1;
      i++;
    }

  printf("a soma de todos esse numeros são = %d",soma);
  return 0;
}