#include <stdio.h>

void imprime(int *arr, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d", *(arr + i));
    }
    printf("\n");
}

int main(void) {
    int numeros[5] = {10, 20, 30, 40, 50};
    imprime(numeros, 5);
    return 0;
}