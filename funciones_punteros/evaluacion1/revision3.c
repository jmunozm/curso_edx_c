
#include<stdio.h>

int diferencia(char c1, char c2){
	int resta;
	
	if ('A'<=c1 && c1<='Z'){
		c1 = c1 + 32;
	}
	if ('A'<=c2 && c2<='Z'){
	c2 = c2 + 32;
	}
	resta = c1 -c2;
	if (resta<0){
		resta = resta * -1;
	}
	//printf("La diferencia entre la %c y %c es %d\n", c1, c2, resta);
	return resta;
}

int main(){
	
	char carac1, carac2;
	int res;
	
	do{	
	printf("Introduce una letra del abecedario en mayusculas o minusculas (excepto la ñ): ");
	scanf("%c", &carac1);
	getchar();
	printf("Introduce otra letra del abecedario en mayusculas o minusculas (excepto la ñ): ");
	scanf("%c", &carac2);
	getchar();
	if ('A' > carac1 || 'Z'< carac1 && carac1<'a' || carac1>'z '|| 'A' > carac2 || 'Z'< carac2 && carac2<'a' || carac2>'z '){
		printf("Error, solo puedes introducir letras del abecedario \n\n");
	}
	
	}while('A' > carac1 || 'Z'< carac1 && carac1<'a' || carac1>'z '|| 'A' > carac2 || 'Z'< carac2 && carac2<'a' || carac2>'z ' );	
	
	
	res = diferencia(carac1,carac2);
	printf("La diferencia entre la %c y la %c es de %d caracteres.", carac1, carac2, res);
	
	return 0;
	}