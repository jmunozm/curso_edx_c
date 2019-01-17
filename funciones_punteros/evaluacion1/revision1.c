// Prueba 1.1
#include <stdio.h>
#include <math.h>
//#include "primo.h"

int diferencia(char a,char b){
    int dif=0;
    if (!(((a>64 && a<91) || (a>96 && a<123)) && ((b>64 && b<91) || (b>96 && b<123)))){
        return -1;
        }
    
    if ((a>96 && a<123)) a=a-32;
    if ((b>96 && b<123)) b=b-32;
    
    dif=fabs(a-b);
    return dif;
    }

int main() {
    char letra1,letra2;
    int dist=0;
    printf("Introduce una letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): ");
    scanf("%c", &letra1);
    printf("Introduce otra letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): ");
    scanf("\n%c", &letra2);

while (diferencia(letra1,letra2)==-1){
    printf("Error, solo puedes introducir letras del abecedario.\n");
    printf("Introduce una letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): ");
    scanf("\n%c", &letra1);
    printf("Introduce otra letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): ");
    scanf("\n%c", &letra2);      
    }    
    
    
    if (diferencia(letra1,letra2)==1) printf("La diferencia entre la %c y la %c es de un carácter.",letra1,letra2);
    else printf("La diferencia entre la %c y la %c es de %d caracteres.",letra1,letra2,diferencia(letra1,letra2));

    return 0;
}