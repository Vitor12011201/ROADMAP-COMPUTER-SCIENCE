#include <stdio.h>

/* OBJETIVO: Serializar os dados: gravar campo por campo para evitar padding.
 */

struct Jogador {
    char id;
    int pontos;
};

int main() {
    FILE *fp = fopen("save_seguro.bin", "wb");
    struct Jogador j1 = {'A', 500};

    if (fp == NULL) return 1;

    // Em vez de fwrite(&j1...), fazemos um por um:
    fwrite(&j1.id, sizeof(char), 1, fp);      // Grava o ID
    fwrite(&j1.pontos, sizeof(int), 1, fp);   // Grava os Pontos

    // Agora o arquivo tem exatamente o tamanho dos dados, sem "buracos" escondidos!
    fclose(fp);
    printf("Dados serializados com sucesso!\n");

    return 0;
}