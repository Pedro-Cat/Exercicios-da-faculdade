#include <stdio.h>

int main(){

    int comprimento, largura, altura;

    printf("Comprimento: ");
    scanf("%d", &comprimento);
    printf("Largura: ");
    scanf("%d", &largura);
    printf("Altura: ");
    scanf("%d", &altura);

    printf("Volume: %d m³\n", comprimento*largura*altura);

    return 0;
}
