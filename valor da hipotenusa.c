#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main(){
    float C1, C2, Hi;
    printf("Digite o valor do cateto1:");
    scanf("%f",&C1);
    
    printf("Digite o valor do cateto2:");
    scanf("%f",&C2);

    Hi=sqrt(C1*C1+C2*C2);
    printf("o valor da hipotenusa e: %.1f\n",Hi);
}