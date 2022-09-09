#include <stdio.h>

int main(){

    float cotacao_dolar, real;

    printf("Quanto vale um Dolar em Real: ");
    scanf("%f", &cotacao_dolar);
    printf("Reais para a conversão: ");
    scanf("%f", &real);

    printf("R$%.2f equivale a $%.2f.\n", real, real*cotacao_dolar);

    return 0;
}
