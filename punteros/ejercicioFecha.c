#include <stdio.h>

typedef struct{
	int dia; 
	int mes;
	int anio;
} Fecha;

void incrementaDia(Fecha *fecha){

	if(fecha->dia >= 30){
		fecha->dia = 1;
		if(fecha->mes == 12){
			fecha->mes = 1;
		}
		else{
			fecha->mes = fecha->mes+1;
		}
	}else{
		fecha->dia = fecha->dia +1;	
	}	
	
	if(fecha->dia==1 && fecha->mes == 1){
		fecha->anio = fecha->anio +1;
	}

}

int main(){
	Fecha fecha;

	printf("Escribe el dia: ");
	scanf("%d", &fecha.dia);

	printf("Escribe el mes: ");
	scanf("%d", &fecha.mes);
	
	printf("Escribe el año: ");
	scanf("%d", &fecha.anio);
	

	incrementaDia(&fecha);
	printf("El dia siguiente al introducido es : %d/%d/%d.\n", fecha.dia,fecha.mes,fecha.anio);

	return 0;
}
