#include <stdio.h>

int MAX(int a,int b)
{
  if ( a > b )
    printf("o maior é %d", a);
  
  else if(b > a)
    printf("O maior é %d", b);  
  
  else 
    printf("Os dois são iguais");
}





int main(void) {
  int a,b;
  
  printf("digite dois numeros\n");
  scanf("%d", &a);
  scanf("%d", &b);

  MAX(a,b);
  
  return 0;
}