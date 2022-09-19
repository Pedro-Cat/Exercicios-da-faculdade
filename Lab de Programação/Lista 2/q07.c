#include <stdio.h>

int main() {
   
  float n1, n2;

  printf("Digite o dividendo: ");
  scanf("%f", &n1);

  do{
    printf("Digite um divisor válido: ");
    scanf("%f", &n2);
  }while(n2 == 0);

  printf("%f / %f = %f\n", n1, n2, n1/n2);
 
  return 0;
}
