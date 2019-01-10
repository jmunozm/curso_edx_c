#include<stdio.h>


void altura (){
	double base;
	double altura;

	printf("Base: ");
	scanf("%lf",&base);
	printf("Altura: ");
	scanf("%lf",&altura);

	printf("Resultado: %lf\n", (base * altura / 2));
	return ;
}


int main(){

	altura();

	return 0;
}
