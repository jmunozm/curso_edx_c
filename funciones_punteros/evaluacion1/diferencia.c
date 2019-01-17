#include <stdio.h>
#include <math.h>

int diferencia(char caracter1, char caracter2){
	
	if((caracter1>=65 && caracter1<=90)||caracter1>=97 && caracter1<=122){
		if((caracter2>=65 && caracter2<=90)||caracter2>=97 && caracter2<=122){
			
			if(caracter1>=97){
				caracter1 = caracter1 - 32;
			}
			if(caracter2>=97){
				caracter2 = caracter2 -32;
			}

			return fabs(caracter1 - caracter2);
		}
	}

	return -1;
}

int main(){
	
	char caracter1;
	char caracter2;
	int dif; 

	printf("Escribe una letra del abecedario en mayúsculas o minúsculas (excepto la ñ): ");
	scanf(" %c", &caracter1);
	printf("Escribe otra letra del abecedario en mayúsculas o minúsculas (excepto la ñ):  ");
	scanf(" %c", &caracter2);
	
	dif = diferencia(caracter1, caracter2);
	
	if(dif==-1){
		printf("Error, solo puedes introducir letras del abecedario.\n");
	}else if(dif==1){
		printf("La diferencia entre la %c y la %c es de un caracter\n", caracter1, caracter2);	
	}else {
		printf("La diferencia entre la %c y la %c es de %d caracteres\n", caracter1, caracter2, dif);		
	}

}
