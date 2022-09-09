#include <stdio.h>

int main(){

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("A potência quadrada de %d é %d.", numero, numero*numero);

    return 0;
}
