#include <stdio.h>
#include <stdbool.h>

bool ehPar(int num) {
    if (num % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
  int num;
  
  printf("Digite um numero inteiro: ");
  scanf("%d", &num);
  
 
  if (ehPar(num) == true) 
    printf("%d é par.\n", num);
    
  else 
    printf("%d é impar.\n", num);
    
  return 0;
}
