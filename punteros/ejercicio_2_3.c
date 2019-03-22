#include <stdio.h>


void estadistica(int x, int y, double *pMedia, double *PVar){
	*pMedia = (x+y)/2;
	*PVar = ((x-*pMedia)*(x-*pMedia)+(y-*pMedia)*(y-*pMedia))/2;
}

int main(){

	int numero1, numero2;
	double media, var;
	double *pMedia, *pVar;

	pMedia = &media;
	pVar = &var;


	printf("Introduce un número: ");
	scanf("%d", &numero1);

	printf("Introduce otro número: ");
	scanf("%d", &numero2);

	estadistica(numero1, numero2, pMedia, pVar);
	
	printf("Media: %.2lf\n", media);
	printf("Varianza: %.2lf\n", var);

	return 0;
}
