#include <stdio.h>

int main(){

    int maior = 0, menor = 0, n;

    do{
        printf("Digite um número aleatório: ");
        scanf("%d", &n);

        if(n == 0){
            break;
        } else if(maior == 0 && menor == 0){
            maior = n;
            menor = n;
        } else{
            if(n > maior){
                maior = n;
            }
            if(n < menor){
                menor = n;
            }
        }
    } while(1);

    printf("O maior número digitado foi: %d.\nE o menor foi: %d.\n", maior, menor);

    return 0;
}
