#include<stdlib.h>
#include<stdio.h>

main(){
    int ddd;
    printf("Insira o DDD:");
    scanf("%d",&ddd);
    if (ddd == 61){
printf("O DDD e um numero de Brasilia");
    } else if (ddd == 71){
    printf("O DDD e um numero de Salvador");
    } else if (ddd == 11){
    printf("O DDD e um numero de Sao Paulo");
    } else if (ddd == 21){
    printf("O DDD e um numero de Rio De Janeiro");
     } else if (ddd == 32){
    printf("O DDD e um numero de Juiz De Fora");
     } else if (ddd == 19){
    printf("O DDD e um numero de Campinas");
     } else if (ddd == 27){
    printf("O DDD e um numero de Vitoria");
     } else if (ddd == 31){
    printf("O DDD e um numero de Belo Horizonte");
     } else {
        printf("DDD invalido");
     }
    return 0;
}
