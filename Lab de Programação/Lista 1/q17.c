#include <stdio.h>

int raiz(int numero){

    int n;
    float aproximacao = numero;
   
    for (n = 0; n < 100; ++n){
          aproximacao = aproximacao/2 + numero/(2*aproximacao);
    }
           
    return(aproximacao);
}

int main(){

    int i, modulo_i;

    printf("Digite um número inteiro: ");
    scanf("%ld", &i);

    modulo_i = raiz(i*i);
    printf("O módulo de %d é: %d", i, modulo_i);

    return 0;
}
