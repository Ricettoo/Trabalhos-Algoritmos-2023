#include<math.h>
#include<stdio.h>
#include<stdlib.h>

main(){
    float nota1,nota2,media,freq;
    double notafinal;
printf("Insira a primeira nota: ");
scanf("%f",&nota1);
printf("Insira a segunda nota: ");
scanf("%f",&nota2);
printf("insira o percentual de nota do aluno:");
scanf("%f",&freq);

media= (nota1+nota2)/2;

if (media>=7.0 && freq>=75){
printf("O aluno passou, e com a media de %f\n",media);
} else {
printf("O aluno reprovou, sua media foi de:%f\n",media);
 }
 return 0;
}
