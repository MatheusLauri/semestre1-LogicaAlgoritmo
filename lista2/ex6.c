#include <stdio.h>

int main(void) {
  int a,b,c;
  printf("Me manda as medidas do triangulo para verificar se é u triangulo retangulo\n");
  scanf("%d %d %d", &a, &b, &c);

  if (c*c == a*a + b*b || a*a == c*c + b*b || b*b == a*a + c*c)
  {
    printf("O triângulo é retângulo.");
  }
  else
 {
   printf("O triângulo não é retângulo.");
 }
  return 0;
}

// 6 - Incremente o exercício anterior, agora informando se este é também um triângulo retângulo.
