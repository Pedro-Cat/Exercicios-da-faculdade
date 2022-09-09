#include <stdio.h>

int main(){

    short int dias;

    printf("Dias trabalhados: ");
    scanf("%d", &dias);

    if(dias < 0){
        printf("Quantidade de dias inválido!\n");
    } else if(dias <= 10){
        printf("Valor líquido a ser pago: R$%.2f", (50.25*dias)*0.9);
    } else if(dias <= 20){
        printf("Valor líquido a ser pago: R$%.2f", ((50.25*dias)*1.2)*0.9);
    } else{
        printf("Valor líquido a ser pago: R$%.2f", ((50.25*dias)*1.3)*0.9);
    }

    return 0;
}
