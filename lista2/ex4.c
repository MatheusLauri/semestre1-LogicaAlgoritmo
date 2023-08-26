#include <stdio.h>

int main(void) {
 #include <stdio.h>
    int x, y, z;

    printf("Digite as medidas dos três lados do triângulo:\n");
    scanf("%d%d%d", &x, &y, &z);

    if (x < y + z && y < x + z && z < x + y) 
    {
      printf("As medidas podem formar um triângulo.\n");
    } 
    else
    {
       printf("As medidas não podem formar um triângulo.\n");
    }


  return 0;
}

// 4 - Escrever um algoritmo que leia três valores inteiros e verifique se eles podem ser as medidas dos lados de um triângulo. 
// Propriedade: o comprimento de cada lado de um triângulo é menor do que a soma dos comprimentos dos outros dois lados.