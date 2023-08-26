#include <stdio.h>

int main(void) {
  int num;
  printf("Me de um numero\n");
  scanf("%d", &num);

  if (num >= 15 && num <= 25 || num >= 45 && num <= 50 )
  {
    printf(" erro ");
  }

  return 0;
}

///2 - Escreva um programa que solicita um número inteiro. Exiba uma mensagem de erro se o número informado estiver entre 15 e 25 ou entre 45 e 50 (inclusive).
