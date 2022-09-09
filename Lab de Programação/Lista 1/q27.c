#include <stdio.h>
#include <math.h>

int main(){

    float n1, n2, n3;

    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);
    printf("Digite mais um número: ");
    scanf("%f", &n3);

    printf("A média aritmética dos números é: %f.\n", (n1+n2+n3)/3);
    printf("A média geométrica dos números é: %f.\n", pow(n1*n2*n3, 1.0/3));

    return 0;
}
