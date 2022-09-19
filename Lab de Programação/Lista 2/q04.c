#include <stdio.h>
#define jose 150
#define pedro 110

int main(){

    int j = jose, p = pedro, i = 0;
    
    while(p <= j){
        p += 3;
        j += 2;
        i++;
    }

    printf("Após %d anos, Pedro terá %d cm de altura e José %d cm.\n", i, p, j);

    return 0;
}
