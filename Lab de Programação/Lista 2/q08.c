#include <stdio.h>

int main() {
   
  float valor, entrada;
  int prestacoes;

  do{
    printf("Digite um valor: ");
    scanf("%f", &valor);
  }while(valor < 0);

  prestacoes = valor/3;
  entrada = valor - 2*prestacoes;

  printf("Para R$%.2f a entrada é de R$%.2f e as prestações são R$%d.00\n", valor, entrada, prestacoes);
 
  return 0;
}
