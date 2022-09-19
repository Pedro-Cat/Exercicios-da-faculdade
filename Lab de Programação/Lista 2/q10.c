#include <stdio.h>

int main() {
   
  for(int i = 15+(4-15%4); i <= 90-(4-90%4); i += 4){
    printf("%d\n", i*i);
  }
 
  return 0;
}
