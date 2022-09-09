#include <stdio.h>

int main(){

    float hora_aula, inss;
    unsigned char horas_trabalhadas;

    printf("Valor da hora aula: R$");
    scanf("%f", &hora_aula);
    printf("Aulas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);
    printf("Desconto percentual do INSS [0 a 100]: ");
    scanf("%f", &inss);
    inss = inss/100;

    printf("Salário bruto: R$%.2f\n", hora_aula*horas_trabalhadas);
    printf("Salário líquido: R$%.2f\n", (hora_aula*horas_trabalhadas)*(1-inss));

    return 0;
}