#include <stdio.h>

int main() {

  int a, b, soma = 0;

  printf("A: ");
  scanf("%d", &a);
  printf("B: ");
  scanf("%d", &b);

  if(b > a){
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
  }
 
  for(int i = b+(b%2); i <= a; i += 2){
    soma += i;
  }
 
    printf("A soma de todos os pares entre %d e %d é: %d.\n", b, a, soma);

  return 0;
}
