#include <stdio.h>

int main(void) {

  int num[5];

  for(int i = 0; i < 5; i++)
  {
    printf("Digite sua nota: ");
    scanf("%d",&num[i]);

    if (num[i] >= 6)
    {
      printf("Sua nota de %d está a cima da média\n", num[i]);
    }
  }
  

  
  return 0;
}