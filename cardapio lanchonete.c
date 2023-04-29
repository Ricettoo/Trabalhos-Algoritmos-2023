#include<stdlib.h>
#include<stdio.h>

main(){
    int cod,qtd;
    printf("insira o codigo do produto:");
    scanf("%d",&cod);
    printf("Insira a quantidade do produto:");
    scanf("%d",&qtd);
    if(cod == 100){
 printf("O valor a ser pago sera de %.21f",7.50*qtd);
    } else if(cod == 101){
        printf("O valor a ser pago sera de %.2f",5.50*qtd);
    } else if(cod == 102){
        printf("O valor a ser pago sera de %.2f",10.50*qtd);
    } else if(cod == 103){
        printf("O valor a ser pago sera de %.2f",11.00*qtd);
    } else if(cod == 104){
        printf("O valor a ser pago sera de %.2f",13.50*qtd);
    } else if(cod == 105){
        printf("O valor a ser pago sera de %.2f",3.50*qtd);
    } else {
        printf("Produto nao encontrado");
    }
return 0;
}
