#include <stdio.h>

void incrementar(int x){
	x++;
}


int main(){

	int i = 1;

	printf("valor de i antes de incrementar(): %d\n", i);
	incrementar(i);
	printf("valor de i despues de incrementar(): %d\n" ,i);

	return 0;
}
