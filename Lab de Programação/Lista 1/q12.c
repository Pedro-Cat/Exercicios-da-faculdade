#include <stdio.h>

int main(){

    int n1, n2;

    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);

    printf("Soma: %d\nDiferença: %d\nProduto: %d\n", n1+n2, n1-n2, n1*n2);
    printf("Resultado da divisão: %d\nResto da divisão: %d\n", n1/n2, n1%n2);

    return 0;
}
