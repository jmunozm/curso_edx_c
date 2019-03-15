#include <stdio.h>

#define TAM 10000

typedef struct{
	int datos[TAM];
	int ocupadas;
} Tabla;

void inicializar_tabla(Tabla *t){
	t->ocupadas=0;
}

double media_tabla(Tabla *t){
	int i, suma;
	for(i=suma=0; i < t->ocupadas; i++)
		suma += t->datos[i];
	return (double)suma / t->ocupadas;
}

void muestra_tabla(Tabla t){
	int i = 0;
	for(i=0; i<t.ocupadas; i++){
		printf("%d\n", t.datos[i]);
	}
}

int main(){
	Tabla x;
	int i, num;
	double med;

	inicializar_tabla(&x);
	
	do{
		printf("Cuantos valores vas a leer (entre 1 y %d)?: ", TAM);
		scanf("%d", &num);

		if(num<1 || num>TAM)
			printf("Error, tienes que introducir un numero entre 1 y %d\n", TAM);
	}while  (num<1 || num>TAM);


	for(i = 0; i<num; i++){
		printf("Introduce el dato %d: ", i+1);
		scanf("%d", &x.datos[i]);
		x.ocupadas++;
	}


	printf("Ocupadas: %d\n",x.ocupadas);
	printf("num: %d\n",num);
	printf("---------------\n Muestra valores de la tabla:\n");
	muestra_tabla(x);
	printf("---------------\n Media tabla:\n");
	med= media_tabla(&x);
	printf("La media de los datos leídos es: %.2lf \n", med);

	printf("---------------\n Muestra valores de la tabla:\n");
	for(i = 0; i < x.ocupadas; i++)
		printf("datos[%d] = %d \n", i, x.datos[i]);
	

	return 0;
}
