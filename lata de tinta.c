#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
	float preco=50.00;
	float pi=3.14;
    float litro=5;
	int metro=3;
    
	
	float raio, altura, A, lata, PT;
	
	printf("informe altura do cilindro:");
	scanf("%f",&altura);
	printf("informe o raio do cilindro:");
	scanf("%f",&raio);
	A=pi*raio*2+2*pi*raio*altura;
	litro=A/3;
	lata=litro/5;
	PT=lata*preco;
	ceil (PT);
	printf("quantidade de latas de tinta necessarias= %f \n",ceil(lata));
	printf("quantidade de litros necessarios= %f \n",litro);
	printf("gasto total com latas de tinta= %f \n",PT);
	

}

