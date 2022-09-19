#include <stdio.h>

int main() {

  int a, b, quantidade = 0;

  printf("A: ");
  scanf("%d", &a);
  printf("B: ");
  scanf("%d", &b);

  if(b > a){
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
  }
 
  for(int i = b; i <= a; i++){
    if(i % 3 == 0){
        quantidade += 1;
        printf("%d\n", i);
    }
  }
 
    printf("A quantidade de números divisiveis por 3 entre %d e %d é: %d.\n", b, a, quantidade);

  return 0;
}
