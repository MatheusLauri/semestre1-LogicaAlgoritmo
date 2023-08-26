#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  
  int num[100];
  
  for(int i =0; i < 100; i++)
  {
    num[i] = rand() % 100 + 1;

    printf("%d ",num[i]);

    if (num[i] % 10 == 0)
    {
      printf("\n");
    }
  }


  

  return 0;
}