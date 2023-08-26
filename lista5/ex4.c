#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {


  srand(time(NULL));
  

  int num[100];
  int soma1= 0;
  int soma = 0;
  int media;
  
  for(int i =0; i < 100; i++)
  {
    num[i] = rand() % 100 + 1 ;
  }

  for(int i =89; i < 100; i++)
  {
    soma1 += num[i];
  }
  
  media = soma1 / 10;

  for(int i =0; i < 100; i++)
  {
    if ( num[i] < media)
        soma += num[i];
  }

  printf("A soma de todos os numeros menores que a media dos ultimos 10 numeros é %d",soma);
  return 0;
}