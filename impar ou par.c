#include<stdlib.h>
#include<stdio.h>

main(){
    int dedoJ,dedoM,somadedo
    printf("quantos dedos joao colocou");
    scanf("%d",&dedoJ);
    printf("quantos dedos maria colocou");
    scanf("%d",&dedoM);
    somadedo=dedoJ+dedoM;

    if(somadedo%2==0){
        printf("O resultado e par");
    } else {
        printf("O resultado e impar");
    }
    return 0;
}