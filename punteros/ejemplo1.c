#include <stdio.h>

int main(){
	int i = 10, *p;
	short s = 2, *q;
	char c = 'a', *r; 

	p = &i; //correcto
	//p = &s;
	//&p = &i;
	q = &s; 
	r = &c; 

	printf("Introduce un número: ");
	scanf("%d", &i);
	printf("El número introducido es: %d.\n", i);

	printf("Introduce un número: ");	
	scanf("%d", p);
	printf("El número introducido es: %d.\n", i);

}
