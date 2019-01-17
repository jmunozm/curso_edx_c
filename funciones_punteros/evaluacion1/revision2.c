/******************************************************************************

Autor: SIGMO
Prueba: 1.1
Curso: IntroducciÃ³n a la programaciÃ³n en C: Funciones y punteros

DescripciÃ³n: Este programa solicita dos carateres por teclado (a y b), llama a una funciÃ³n 'diferencia(a,b)' 
y dependiendo del valor entero que devuelva la funciÃ³n muestra por pantalla uno de tres posibles mensajes:
1)  Un mensaje de error informando de que alguno de los caracteres introducidos no es una letra.
2)  Un mensaje informando de que la diferencia entre ambas letras es de un carÃ¡cter.
3)  Un mensaje informando de que la diferencia entre ambas letras es de x caracteres (para x>1).

Si el usuario se equivoca al introducir los caracteres, se le vuelven a solicitar tantas veces como se equivoque el
usuario, hasta registrar dos caracteres entre 'A' y 'Z' o entre 'a' y 'z'

La funciÃ³n diferencia(a,b) devuelve la diferencia en caracteres que hay entre las dos letras a y b, sin 
tener en cuenta minÃºsculas y mayÃºsculas y siempre retornando un nÃºmero positivo. Si no lo estÃ¡n devolverÃ¡ -1. 
*******************************************************************************/

#include <stdio.h>

int diferencia(char a, char b) {
    
    if ((('A' <= a && a <= 'Z') || ('a' <= a && a <= 'z')) && 
    (('A' <= b && b <= 'Z') || ('a' <= b && b <= 'z'))) {
        if (('a' <= a) && (a <= 'z'))
            a = a - 32;            // se vuelve la variable 'a' a su equivalente en mayÃºsculas
        if (('a' <= b) && (b <= 'z'))
            b = b - 32;           // se vuelve la variable 'b' a su equivalente en mayÃºsculas
        if (a < b)
            return (b - a);
        else                  // se calcula la diferencia relativa entre a y b sin importar cual es realmente mayor
            return (a - b);   // o si alguna de ellas o ambas son mayÃºsculas
        }
    else
        return -1;
}


int main() {
    char l1, l2;
    int difer = -1;
    
    do {
        printf("\nIntroduce una letra del abecedario en mayÃºsculas o minÃºsculas (excepto la Ã±): ");
        scanf("%c", &l1);
        
        printf("\nIntroduce otra letra del abecedario en mayÃºsculas o minÃºsculas (excepto la Ã±): ");
        getchar();
        scanf("%c", &l2);


        if ((difer = diferencia(l1,l2)) == -1) {
            printf("\nError, solo puedes introducir letras del abecedario.");
            getchar();
        }

    } while (difer == -1);
    
    
    if ( difer != 1)
        printf("\nLa diferencia entre la '%c' y la '%c' es de %d caracteres.", l1, l2, difer);
    else
        printf("\nLa diferencia entre la '%c' y la '%c' es de un carÃ¡cter.", l1, l2);
    
    return 0;
}