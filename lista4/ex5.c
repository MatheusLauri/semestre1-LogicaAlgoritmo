#include <stdio.h>

int potencia (int numero,int expoente){
    if (expoente == 1)
        return 1;
  
   // if(numero < 0 || expoente < 0)  
     //   return 0;
    
  int pot = 1;
  
  for(int cont = 1; cont <= expoente; cont++){
    pot *= numero;
  }
  
  return pot;

}



int main(void) {
  int num,expo;
  
  printf("Digite o numero: ");
  scanf("%d",&num);

  printf("Digite o expoente: ");
  scanf("%d", &expo);


  int x = potencia(num,expo);

  printf("%d", x);
  return 0;
}