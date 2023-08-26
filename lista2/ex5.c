#include <stdio.h>

int main(void) {
  int a,b,c; 
  printf("Me da as medidas do seu triangulo\n");
  scanf("%d %d %d", &a, &b, &c);


  if ( a == b && b == c )
  {
    printf("isso é um equilátero");
  }
  if (a == b && b != c || a == c && c != b || b == c && c != a)
  {
    printf("Isso é um isósceles");
  }
  if (a != b && b != c )
  {
    printf("isso é um escaleno");
  }
  return 0;
}

// 5 - Incremente o exercício anterior, para o caso das medidas formarem um triângulo válido, informar qual o tipo de triângulo que eles formam: equilátero, isósceles ou escaleno.
