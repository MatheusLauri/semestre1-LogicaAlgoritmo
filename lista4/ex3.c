#include <stdio.h>


int absoluto(int num) {
  
    if (num < 0) 
      return -num;
     
    else 
      return num;
    
}

int main() {
  int num;
  printf("Digite um numero inteiro: ");
    
  scanf("%d", &num);
  printf("O valor absoluto de %d é %d.\n", num, absoluto(num));
  
  return 0;
}
