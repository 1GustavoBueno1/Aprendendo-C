#include <stdio.h>

void dobra(int *x) {
    *x = *x * 2;
}

int main(void) {
    int numero = 5;
    dobra(&numero);
    printf("%d\n", numero);
}