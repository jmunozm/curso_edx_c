#include "primo.h"
#include <math.h>

int esPrimo(int num){
	int i;
	for(i=2; i<=sqrt(num); i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}
