#include <stdio.h>

/* OBJETIVO: Gravar uma struct inteira diretamente no arquivo binario.
 */

struct Jogador {
    int id;
    int pontos;
};

int main() {
    FILE *fp = fopen("save.bin", "wb");
    struct Jogador j1 = {.id = 1, .pontos = 5000};

    if (fp == NULL) return 1;

    // Gravamos a struct INTEIRA de uma vez so!
    // O tamanho eh o sizeof da struct, e queremos gravar 1 unidade.
    fwrite(&j1, sizeof(struct Jogador), 1, fp);

    fclose(fp);
    printf("Progresso do jogador salvo em binario!\n");

    return 0;
}