#include <stdio.h>

int main(){
	
	int i = 0;
	int j = 0;
	double media = 0;
	int *p;
	int *q;
	double *r;

	p = &i;
	q = &j;
	r = &media;

	printf("Introduce un número: ");
	scanf("%d", p);

	printf("Introduce otro número: ");
	scanf("%d", q);

	*r = ((*p + *q) / (double)2);

	printf("media = %.2lf\n", *r);

	return 0;
}
