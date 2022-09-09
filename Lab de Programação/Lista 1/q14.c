#include <stdio.h>

int main(){

    unsigned char celsius;

    printf("Temperatura em graus Celsius: ");
    scanf("%d", &celsius);

    printf("Temperatura em graus Fahrenheit: %d\n", (9*celsius+160)/5);

    return 0;
}
