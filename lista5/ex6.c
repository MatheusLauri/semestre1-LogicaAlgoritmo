#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

bool sequencia()
  {
    int ver = false;
    srand(time(NULL));
    int num [5];

    for(int i = 0; i < 5; i++)
    {
      num[i] = rand() % 10 + 1;
    }

    for(int i = 1; i < 5; i++)
      {
        if (num[i - 1] < num[i])
           ver = true;
        else 
          return false;
      }

    for(int i = 0; i < 5; i++)
    {
      printf("%d ", num[i]);
    }


    return ver;
}


int main(void) {
  while(sequencia() != true){
    if (sequencia() == true)
    {
      printf("zumbi");
      break;
    }
  }
    

  return 0;
}