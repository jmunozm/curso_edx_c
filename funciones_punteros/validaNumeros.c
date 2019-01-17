#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int esPrimo(int num){
	int i;
	for(i=2; i<=sqrt(num); i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){

	int num;

	printf("Introduce el numero entero: ");
	scanf("%d", &num);

	for(int i = 2; i<=num; i++){
		if(esPrimo(i)){
			printf("%d es primo\n", i);
		}else{
			printf("%d no es primo\n", i);
		}	
	}
	
	return 0;
}
