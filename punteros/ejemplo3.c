#include <stdio.h>

int main(){
	
	int i = 10, j, *p;
	j = i;
	p = &i;
	i = 5;

	printf("i=%d j=%d *p=%d", i, j, *p);

	return 0;
}
