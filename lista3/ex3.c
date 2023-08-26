#include <stdio.h>

int main(void) {
  int i = 1;

  while(i <= 5)
    {
      int n1;
      printf("Me indique um numero para verificar se ele é impar ou par: ");
      scanf("%d",&n1);

      if ( n1 % 2 == 0 )
      {
        printf("%d é par\n",n1);
      }
      else 
      {
        printf("%d é impar \n",n1);
      }
      i++;
    }
  return 0;
}