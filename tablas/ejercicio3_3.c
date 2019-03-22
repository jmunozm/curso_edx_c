#include <stdio.h>

#define DIM 3


void imprimeTabla(int *p, int tamanio, int macro){
	int i = 0;
	for(i = 0; i<tamanio; i++)
		printf("Valor %d = %d = %d\n", i, p[i], p[i]+macro);

	printf("MACRO: %d\n", macro);
}

int main(){
	
	int datos[DIM] = {2,4,7};
	int macro = 5;

	printf("DIM: %d\n",DIM);
	imprimeTabla(datos, DIM, macro);

	return 0;
}
