#include<stdio.h>
#include<stdlib.h>
main(){
	float x, y;
	x=3;
	y=sqrt(x);
	printf("raiz quadrada= %f \n",y);
	
	x=5;
	y=pow(x, 3);
	printf("potencia= %f \n",y);
	
	x=1024;
	y=log2(x);
	printf("logaritmo base 2= %f zn",y);
	
	x=1000;
	y=log(x);
	printf("logaritmo natural=%f \n",y);
	
	system("pause");
}
