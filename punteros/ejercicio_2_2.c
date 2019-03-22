#include <stdio.h>

void niParesniNones(int *n1, int *n2){
	if(*n1%2==0 && *n2%2==0){
		(*n2)++;
	}
	if(*n1%2!=0 && *n2%2!=0){
		(*n2)++;	
	}
}


int main(){
	
	int numero1, *n1;
	int numero2, *n2;

	n1 = &numero1;
	n2 = &numero2;

	printf("Introduce un número entero: ");
	scanf("%d",n1);

	printf("Introduce otro número entero: ");
	scanf("%d",n2);
	
	niParesniNones(n1, n2);

	printf("Los números tras llamar a la funcion son %d y %d \n", numero1, numero2);
	return 0;
}
