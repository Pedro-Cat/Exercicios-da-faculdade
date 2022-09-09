#include <stdio.h>

int main(){

    float raio;

    printf("Digite o raio do círculo: ");
    scanf("%f",&raio);

    printf("Diâmetro: %f\n", raio*2);
    printf("Circunferência: %f\n", 2*3.14159*raio);
    printf("Área: %f\n", 3.14159*(raio*raio));

    return 0;
}
