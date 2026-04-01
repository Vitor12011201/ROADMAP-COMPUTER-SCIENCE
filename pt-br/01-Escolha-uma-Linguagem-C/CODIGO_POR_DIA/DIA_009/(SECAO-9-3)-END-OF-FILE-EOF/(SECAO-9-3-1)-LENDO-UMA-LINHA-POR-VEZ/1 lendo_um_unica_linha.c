#include <stdio.h>

/* OBJETIVO: Usar o fgets para ler apenas a primeira linha de um arquivo.
 * O fgets para de ler quando encontra uma quebra de linha (\n) ou atinge o limite do buffer.
 */

int main() {
    FILE *fp = fopen("citacao.txt", "r");
    char linha[1024]; // Nosso "balde" para carregar o texto

    if (fp == NULL) return 1;

    // Lemos ate 1024 bytes do arquivo 'fp' e guardamos em 'linha'
    if (fgets(linha, sizeof(linha), fp) != NULL) {
        printf("Primeira linha: %s", linha);
    }

    fclose(fp);
    return 0;
}