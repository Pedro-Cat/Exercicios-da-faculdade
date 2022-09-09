#include <stdio.h>

int main(){

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("O sucessor desse número é: %d\n", ++numero);
    printf("E o antecessor é: %d.\n", numero-2);

    return 0;
}
