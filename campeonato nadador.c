#include<stdlib.h>
#include<stdio.h>

main(){
    int idade;
    printf("Insira a Idade do competidor:");
    scanf("%d",&idade);
    if(idade >= 5 && idade <=7){
    printf("O competidor entrara na categoria Infantil A \n");
 } else if(idade >= 8 && idade <= 10){
    printf("O competidor entrara na categoria Infantil B \n");
 } else if(idade >= 11 && idade <= 13){
    printf("O competidor entrara na categoria Juvenil A \n");
 } else if(idade >=14 && idade <= 17){
    printf("O competidor entrara na categoria Juvenil B");
 } else if(idade >= 18){
        printf("O competidor entrara na categoria Senior");
    } else {
        printf("O competidor nao pode ser categorizado");
    }
    return 0;
 }
