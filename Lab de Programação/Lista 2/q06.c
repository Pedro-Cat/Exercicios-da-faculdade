#include <stdio.h>

int main(){

    char confirmacao;
    int eleitores = 0, paulo = 0, renata = 0, branco = 0, nulo = 0, voto;

    do{
        do{
            printf("Eleitor %d\nVoto: ", eleitores+1);
            scanf("%d", &voto);
            getchar();
            do{
                printf("Deseja confirmar [S/N]: ");
                scanf("%c", &confirmacao);
                getchar();
            } while(confirmacao != 'S' && confirmacao != 's' && confirmacao != 'N' && confirmacao != 'n');
        } while(confirmacao != 'S' && confirmacao != 's');
        if(voto < 0){
            printf("Eleições finalizadas...\n");
            break;
        } else{
            switch(voto){
            case 0:
                printf("Seu voto em branco foi armazenado!\n");
                branco++;
                break;
            case 5:
                printf("Seu voto para Paulo foi armazenado!\n");
                paulo++;
                break;
            case 7:
                printf("Seu voto para Renata foi armazenado!\n");
                renata++;
                break;
            default:
                printf("Seu voto nulo foi armazenado!\n");
                nulo++;
                break;
            }
        }

        eleitores++;
    } while(1);

    puts("-----------------------------");
    printf("Número de eleitores: %d\n", eleitores);
    printf("Porcentagem de votos\n");
    printf("Paulo: %.2f\n", ((float)paulo*100)/eleitores);
    printf("Renata: %.2f\n", ((float)renata*100)/eleitores);
    printf("Em branco: %.2f\n", ((float)branco*100)/eleitores);
    printf("Nulo: %.2f\n", ((float)nulo*100)/eleitores);

    return 0;
}
