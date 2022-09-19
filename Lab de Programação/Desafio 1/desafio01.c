#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){

    srand(time(NULL));

    unsigned char armarios = 0;
    int menu;

    do{
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Situação dos armários:\n");
        printf("7 6 5 4 3 2 1 0\n");
        printf("----------------\n");

        for(unsigned char _ = 128; _ >= 1; _ = _/2){
            (armarios & _) ? printf("1 ") : printf("0 ");
        }

        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("1. Ocupar armário.\n");
        printf("2. Liberar armário.\n");
        printf("3. Sair.\n");
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        
        do{
            printf("Opção: ");
            scanf("%d", &menu);
            getchar();
        }while(menu < 1 || 3 < menu);

        switch(menu){
        case 1:
            if(armarios == 255){
                printf("-=-=-=-=-=-=-=-=-=-=-=-=-\n");
                printf("Todos os armários estão ocupados!\n");
                break;
            }
            do{
                menu = (char)pow(2, rand() % 8);
                (armarios & menu) ? menu = 10 : (armarios = armarios | menu);
            }while(menu == 10);
            menu = 1;
            break;
        case 2:
            printf("-=-=-=-=-=-=-=-=-=-=-=-=-\n");
            printf("Número do armário [0/7]: ");
            scanf("%d", &menu);
            menu = (char)pow(2, menu);
            (armarios & menu) ? (armarios = armarios & ~menu) : printf("-=-=-=-=-=-=-=-=-=-=-=-=-\nArmário já está liberado!\n");
            menu = 2;
            break;
        }

    }while(menu != 3);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Finalizando o programa...\n");

    return 0;
}
