#include <stdio.h>

int main(void) {
  int i = 1;
  int soma = 0;

  while (i <= 100)
    {
      printf("%d \n", i);
      soma += i;
      i++;
    }
  printf("O resultado de todos esses numeros são = %d", soma);
  return 0;
}