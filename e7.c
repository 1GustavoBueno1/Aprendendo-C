#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50] = "Gustavo";
    char sobrenome[] = "Bueno";

    printf("tamanho do nome: %zu\n", strlen(nome));
    strcat(nome, " ");
    strcat(nome, sobrenome);
    printf("depois de strcat: %s\n", nome);

    if (strcmp(nome, "Gustavo Bueno") == 0) {
        printf("strcmp: são iguais\n");
    }

    char copia[50];
    strcpy(copia, nome);
    printf("copia: %s\n", copia);
    return 0;
}