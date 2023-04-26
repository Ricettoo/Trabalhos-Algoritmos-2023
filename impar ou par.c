#include<stdlib.h>
#include<stdio.h>

main(){
    int num;
    printf("digite um numero");
    scanf("%d",&num);

    if(num % 3 == 0){
    printf("o numero %d e multiplo por 3", num);
 }
else {
    printf("o numero %d nao e multiplo por 3", num);
}
return 0;
}