#include <stdio.h>

int main(){

    int valor;
    
    printf("Digite um valor decimal: ");
    scanf("%d", &valor);
    printf("Valor em hexadecimal: %X\n", valor);
    printf("Valor em octal: %o\n", valor);

    return 0;
}
