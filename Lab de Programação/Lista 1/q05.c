#include <stdio.h>

int main(){

    float valor;
    printf("Valor da conta: R$");
    scanf("%f", &valor);
    printf("Valor total da conta com taxa: R$%.2f\n", valor*1.1);

    return 0;
}
