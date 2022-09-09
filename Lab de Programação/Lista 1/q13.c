#include <stdio.h>

int main(){

    int a, b;

    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);

    a = a^b;
    b = a^b;
    a = a^b;

    printf("O valor de A agora é: %d\nE o de B é: %d\n", a, b);

    return 0;
}
