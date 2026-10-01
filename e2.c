#include <stdio.h>

int soma(int a, int b);

int main (void) {
    int resultado = soma(3, 4);
    printf("%d\n", resultado);
    return 0;
}

int soma(int a, int b) {
    return a + b;
}
