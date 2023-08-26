#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  srand(time(NULL));
  

  int num[100];
  int soma = 0;
  int media;
  
  for(int i =0; i < 100; i++)
  {
    num[i] = rand() % 100 + 1 ;
    soma += num[i];
  }

  printf("A media dos 100 numeros é %d", soma/100);
  return 0;
}