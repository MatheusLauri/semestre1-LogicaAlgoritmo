#include <stdio.h>
#include <stdbool.h>

int Primo (int numero){
int divisores = true;
  
for(int cont = 2; cont < numero; cont++){

    if(numero % cont == 0){
        divisores = false;
    }
  }

  if (divisores == false){
      printf("False");
  }
  else {
    printf("True");
  }
}


int main(void) {

  int a;

  printf("Verificador se o numero é primo: ");
  scanf("%d",&a);
  
  Primo(a);
  
  return 0;
}