#include <stdio.h>

void incrementarC(int *z) {
    (*z)++;
}

void incrementarB(int y) {
    y++;
    incrementarC(&y);
}

void incrementarA(int *x) {
    (*x)++;
    incrementarB(*x);
}

int main() {
    int i=1;
    incrementarA(&i);
    printf("Valor final de i: %d", i);
    return 0;
}