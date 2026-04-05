#include <stdio.h>

/* OBJETIVO: Usar fputc para um unico caractere e fputs para uma string inteira.
 * Estas funcoes sao mais rapidas que o fprintf quando nao ha variaveis para formatar.
 */

int main() {
    FILE *fp = fopen("saida.txt", "w");

    if (fp == NULL) return 1;

    // fputc: Escreve apenas UM caractere (útil para loops ou quebras de linha)
    fputc('A', fp);
    fputc('\n', fp);

    // fputs: Escreve uma string inteira de uma vez
    fputs("Linha escrita com fputs!\n", fp);

    fclose(fp);
    return 0;
}