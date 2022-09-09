#include <stdio.h>

int main(){

    int x, n, n2;

    printf("Digite um x: ");
    scanf("%d", &x);
    printf("Digite um n: ");
    scanf("%d", &n);

    n2 = 1 << n;

    printf("O produto entre %d e 2 elevado a %d é: %d.\n", x, n, x*n2);

    return 0;
}
