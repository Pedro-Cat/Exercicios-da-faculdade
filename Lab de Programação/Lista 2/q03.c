#include <stdio.h>

int main(){

    int f, fatorial;
    fatorial = 1;

    do{
        printf("Digite um número inteiro e positivo: ");
        scanf("%d", &f);
    } while(f < 0);

    for(int i = 1; i <= f; i++){
        fatorial *= i;
    }

    printf("O fatorial de %d! é: %d.\n", f, fatorial);

    return 0;
}
