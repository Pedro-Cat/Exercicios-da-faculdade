#include <stdio.h>

int main() {

  int a, b;

  printf("A: ");
  scanf("%d", &a);
  printf("B: ");
  scanf("%d", &b);

  if(b > a){
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
  }
 
  for(int i = b+(4-b%4); i <= a-(4-a%4); i += 4){
    printf("%d\n", i*i);
  }
 
  return 0;
}
