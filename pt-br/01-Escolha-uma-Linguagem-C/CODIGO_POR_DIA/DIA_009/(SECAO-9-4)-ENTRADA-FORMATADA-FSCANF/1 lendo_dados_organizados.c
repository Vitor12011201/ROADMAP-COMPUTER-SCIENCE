#include <stdio.h>

/*  OBJETIVO: Usar o fscanf para ler tres tipos de dados diferentes na mesma linha.
 * O arquivo deve seguir o padrao: string float inteiro.
 */

int main() {
    FILE *fp = fopen("whales.txt", "r");
    char nome[100];
    float comprimento;
    int massa;

    if (fp == NULL) return 1;

    // Lemos uma string (%s), um float (%f) e um int (%d) de uma vez
    // O fscanf ignora espaços e pula para o proximo dado automaticamente
    fscanf(fp, "%s %f %d", nome, &comprimento, &massa);

    printf("Nome: %s | Comp: %.1f | Massa: %d\n", nome, comprimento, massa);

    fclose(fp);
    return 0;
}