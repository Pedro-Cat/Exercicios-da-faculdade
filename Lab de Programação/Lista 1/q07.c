#include <stdio.h>

int main(){

    int horas, minutos, segundos;

    printf("Horas: ");
    scanf("%d", &horas);
    printf("Minutos: ");
    scanf("%d", &minutos);
    printf("Segundos: ");
    scanf("%d", &segundos);

    printf("O total de segundos é de %d.", horas*3600+minutos*60+segundos);

    return 0;
}
