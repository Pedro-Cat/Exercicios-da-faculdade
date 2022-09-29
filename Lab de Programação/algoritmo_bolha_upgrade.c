#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

int main(){

    int v[TAM], naoOrdenado, i = 0, qtd_for = 0;

    srand(time(NULL));

    printf("Vetor não ordenado:\n");
    for(int k = 0; k < TAM; k++){
        v[k] = rand() % 101;
        printf("%d ", v[k]);
    }
    printf("\n");

    do{
        naoOrdenado = 0;
        i++;
        for(int j = 0; j<TAM-i; j++){
            if(v[j]>v[j+1]){
                v[j] = v[j] ^ v[j+1];
                v[j+1] = v[j+1] ^ v[j];
                v[j] = v[j] ^ v[j+1];
                naoOrdenado = 1;
            }
            qtd_for++;
        }
    }while(naoOrdenado);

    printf("Vetor ordenado:\n");
    for(int _ = 0; _<TAM; _++){
        printf("%d ", v[_]);
    }
    printf("\nQuantidade de vezes que passou pelo while: %d\n", i);
    printf("Quantidade de vezes que passou pelo for: %d\n", qtd_for);

    return 0;
}
