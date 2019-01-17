#include<stdio.h>
#include<math.h>

int primoMayor(int num){
	int mayor = 0;

	for(int i = 2; i<=num; i++){
		
		if(esPrimo(i)==1){
			mayor = i;
		}

	}
	return mayor;
}

int esPrimo(int num){
	int i;
	for(i=2; i<=sqrt(num); i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}

int main (){

	int numero;

	do{
		printf("Introduce un número superor a 1: ");
		scanf("%d",&numero);
	}while(numero<2);

	printf("El mayor primo comprendido entre %d y %d es %d.\n", 2, numero,  primoMayor(numero));

	return 0;
}
