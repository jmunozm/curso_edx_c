#include<stdio.h>

void altura (double *b, double *a){
	printf("Resultado: %lf\n", (b * a / 2));
	return ;
}


int main(){

	double base;
	double altura;

	printf("Base: ");
	scanf("%lf",&base);
	printf("Altura: ");
	scanf("%lf",&altura);

	altura(base, altura);
	return 0;
}
