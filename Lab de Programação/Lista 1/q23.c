#include <stdio.h>

int main(){

    short int n, n1, n2, n3;

    printf("Digite um número com 3 dígitos: ");
    scanf("%d", &n);

    n1 = n/100;
    n2 = (n-n1*100)/10;
    n3 = n-(n1*100+n2*10);
    n = n3*100+n2*10+n1;

    printf("O inverso de %d%d%d é %d.\n", n1, n2, n3, n);

    return 0;
}
