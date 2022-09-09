#include <stdio.h>

int main(){

    int valor;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    printf("O triplo desse valor é: %d\nO quadrado é: %d\nE o meio é: %.1f\n", valor*3, valor*valor, (float)valor/2);

    return 0;
}
