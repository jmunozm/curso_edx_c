#include<stdio.h>
#include<math.h>


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

	printf("Introduce el numero entero mayor a 3: \n");
	scanf("%d", &num);

	if(num>3){
		if(esPrimo(num)==1){
			printf("El número %d es primo ", num);
			if(esPrimo(num+2)==1){
				if(esPrimo(num-2)==1){
					printf("y los números %d y %d son primos gemelos\n", num-2, num+2);
				}else{
					printf("y el %d es primo gemelo\n", num+2);	
				}
			}else if(esPrimo(num-2)==1){
				printf("y el %d es primo gemelo\n", num-2);	
			}else{
				printf("pero no tiene un primo gemelo\n");
			}
		}else{
			printf("El número %d no es primo\n", num);
		}
	}else{
		printf("El número no es mayor a 3\n");
	}
	
	return 0;
}
