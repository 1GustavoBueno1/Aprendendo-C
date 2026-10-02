#include <stdio.h>

void troca(int *a, int *b) {
    int a2 = *a;
    *a = *b;
    *b = a2;
}

int main(void) {
    int x = 10, y = 20;
    troca(&x, &y);
    printf("x=%d, y=%d\n", x, y);
    return 0
}