#include<stdio.h>
#include<stdlib.h>

main(){
	float DP, CG, KM;
	printf("informe a distancia percorrida:");
	scanf("%f" ,&DP);
	printf("informe o total de combustivel gasto:");
	scanf("%f" ,&CG);
	KM=DP/CG;
	printf("O consumo medio de gasolina e: %.1f KM/L", KM);
}