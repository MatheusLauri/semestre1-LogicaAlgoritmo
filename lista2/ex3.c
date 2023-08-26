#include <stdio.h>

int main(void) {
  int num;
  printf("\t Me da um numero\n");
  scanf("%d", &num);

  if (num > 80 || num < 25 || num == 40 )
  {
    printf("Parabéns");
  }
  return 0;
}

// 3 - Faça um algoritmo que receba um número e mostre uma mensagem caso este número seja maior que 80, menor  que 25 ou igual a 40.
