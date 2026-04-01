#include <stdio.h>

/* OBJETIVO: Usar o sinal EOF para contar quantos caracteres existem no arquivo.
 */

int main() {
    FILE *fp = fopen("hello.txt", "r");
    int c;
    int contador = 0;

    if (fp == NULL) return 1;

    // Enquanto nao chegar no sinal de fim de arquivo...
    while ((c = fgetc(fp)) != EOF) {
        contador++; // Encontrou uma letra? Soma no contador.
    }

    printf("O arquivo possui %d caracteres.\n", contador);

    fclose(fp);
    return 0;
}