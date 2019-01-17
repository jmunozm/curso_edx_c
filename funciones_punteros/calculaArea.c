#include<stdio.h>

double calculaArea(double b, double a){
	
	double altura;
	altura = (b * a / 2);
	
	return altura;
}



int main(){

	double base;
	double altura;
	double area;

	printf("Base: ");
	scanf("%lf",&base);
	printf("Altura: ");
	scanf("%lf",&altura);

	area = calculaArea(base, altura);
	printf("Resultado: %.2lf\n", area);
	return 0;
}
