#include <stdio.h>

#define TAM 100

int main(){

	char cadena[TAM], *c;
	int i;

	c = &cadena[0];

	printf("Introduce cadena: ");
	scanf("%s", cadena);

	printf("cadena: %s", cadena);
	printf("--------------------\n");

	for(i = 0; i<TAM; i++){
		if(c!=""){		
			printf("%d => %s", i, c);
		}
		c++;
	}


	return 0;
}
