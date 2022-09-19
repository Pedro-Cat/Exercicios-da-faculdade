#include <stdio.h>

int main(){

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("====== Tabuada ======\n");
    printf("%d x 1 = %d\n", numero, numero);
    printf("%d x 2 = %d\n", numero, numero*2);
    printf("%d x 3 = %d\n", numero, numero*3);
    printf("%d x 4 = %d\n", numero, numero*4);
    printf("%d x 5 = %d\n", numero, numero*5);
    printf("%d x 6 = %d\n", numero, numero*6);
    printf("%d x 7 = %d\n", numero, numero*7);
    printf("%d x 8 = %d\n", numero, numero*8);
    printf("%d x 9 = %d\n", numero, numero*9);

    return 0;
}
