#include <stdio.h>

int main(){

    int i;

    printf("Digite um número inteiro: ");
    scanf("%d", &i);

    (i % 2) ? printf("%d é ímpar!\n", i) : printf("%d é par!\n", i);

    return 0;
}
