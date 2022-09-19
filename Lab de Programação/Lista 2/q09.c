#include <stdio.h>

int main() {
   
  int n1 = 1, n2 = 1;

  for(int i = 1; i <= 20; i++){
    printf("%d\n",n1);
    n2 += n1;
    n1 = n2 - n1;
  }
 
  return 0;
}
