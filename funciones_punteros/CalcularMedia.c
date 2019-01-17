#include <stdio.h>

double media(int a, double b){
	double resultado; 
	resultado = 0.5 * (a+b);
	return resultado;
}

int main(){
	int x = 2, y = 3;
	int res;

	res = media(x,y);
	media(x, y);
	//printf("La media de %d y %d es %.1lf\n", x, y, res );
	printf("La media de %d y %d es %d\n", x, y, res );
	
	return 0;
}
