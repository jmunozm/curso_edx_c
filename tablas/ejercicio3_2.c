#include <stdio.h>

#define TAM 3


int main(){

	int i, a[TAM] = {1,2,3}, *p;
	double b[TAM] = {1.2, 3.1, 2.5}, *q;

	p = a;
	q = b;


	for(i = 0; i<TAM; i++){
		printf("LISTA a: %d | LISTA b: %.2lf \n", *p, *q);
		p++;
		q++;
	}


	return 0;
}
