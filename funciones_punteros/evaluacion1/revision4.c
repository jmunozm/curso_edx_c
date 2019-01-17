#include <stdio.h>
#include <math.h>

int diferencia(char c1, char c2){
    char letra;
    int dif;

    if ((c1 >= 'a' && c1 <= 'z')  || (c1 >= 'A' && c1 <= 'Z' )){
        if ((c2 >= 'a' && c2 <= 'z' ) || (c2 >= 'A' && c2 <= 'Z' )){
            dif=(c2-c1);
            return dif;
        }
        else
            return -1;
    }
    else
        return -1;
}

void error();

int main(){
	char c1, c2, letra;
	int dif;


    printf("Introduce una letra del abecedario en mayÃºsculas o minÃºsculas (excepto la Ã±): ");
    scanf(" %c", &c1);
    fseek(stdin, 0, SEEK_END);
    printf("Introduce otra letra del abecedario en mayÃºsculas o minÃºsculas (excepto la Ã±): ");
    scanf(" %c", &c2);

    dif=diferencia(c1,c2);

    if (dif==-1){
        error();
    }
    else if (dif==2){
        printf("La diferencia entre la %c y la %c es de un caracter.\n", c1, c2);
    }
    else
        printf("La diferencia entre la %c y la %c es de %d caracteres.\n", c1, c2, dif);

	return 0;
}

void error(){
    printf("Error, solo puedes introducir letras del abecedario.\n");
}
