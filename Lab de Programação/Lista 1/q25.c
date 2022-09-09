#include <stdio.h>

int main(){

    int sec_total, hor, min, sec;

    printf("Tempo em segundos: ");
    scanf("%d", &sec_total);

    sec = sec_total % 60;
    min = (sec_total / 60) % 60;
    hor = sec_total / 3600;

    printf("%d segundos equivalem a %d hora(s), %d minuto(s) e %d segundo(s).\n", sec_total, hor, min, sec);

    return 0;
}
