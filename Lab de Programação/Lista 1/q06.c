#include <stdio.h>

int main(){

    char sexo;
    float altura;

    printf("Altura: ");
    scanf("%f", &altura);
    getchar();
    printf("Sexo [M/F]: ");
    scanf("%c", &sexo);

    if(sexo == 'M' || sexo == 'm'){
        printf("Peso ideal: %.2fkg\n", 72.7*altura-58);
    } else if(sexo == 'F' || sexo == 'f'){
        printf("Peso ideal: %.2fkg\n", 62.1*altura-44.7);
    } else{
        printf("Algum dado digitado está errado!\n");
    }

    return 0;
}
