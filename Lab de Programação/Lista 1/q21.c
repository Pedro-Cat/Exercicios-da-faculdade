#include <stdio.h>

int main(){

    int n1, n2;

    printf("Digite um número inteiro: ");
    scanf("%d", &n1);
    printf("Digite outro número inteiro: ");
    scanf("%d", &n2);

    (n2 % n1) ? printf("%d não é múltiplo de %d.\n", n1, n2) : printf("%d é múltiplo de %d.\n", n1, n2);

    return 0;
}
