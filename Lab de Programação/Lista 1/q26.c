#include <stdio.h>
#include <math.h>

int main(){

    int x1, y1, x2, y2;
    float distancia;

    printf("Digite o x1: ");
    scanf("%d", &x1);
    getchar();
    printf("Digite o y1: ");
    scanf("%d", &y1);
    getchar();
    printf("Digite o x2: ");
    scanf("%d", &x2);
    getchar();
    printf("Digite o y2: ");
    scanf("%d", &y2);
    getchar();

    distancia = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("A distância entre os pontos (%d,%d) e (%d,%d) é: %.2f.\n", x1, y1, x2, y2, distancia);

    return 0;
}
