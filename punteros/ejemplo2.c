#include <stdio.h>

int main(){
	int i, *p;

	i = 1000000;
	printf("La variable i vale %d. \n", i);

	p = &i;
	*p = 10;
	printf("La variable i vale %d. \n", i);

	return 0;
}
