#include <stdio.h>

/* OBJETIVO: Ler todas as linhas de um arquivo de dados usando um loop.
 * O fscanf retorna EOF quando nao consegue mais ler dados (fim do arquivo).
 */

int main() {
    FILE *fp = fopen("whales.txt", "r");
    char nome[100];
    float comprimento;
    int massa;

    if (fp == NULL) return 1;

    // Enquanto o fscanf conseguir ler o conjunto completo de dados...
    while (fscanf(fp, "%s %f %d", nome, &comprimento, &massa) != EOF) {
        printf("A baleia %s tem %d toneladas.\n", nome, massa);
    }

    fclose(fp);
    return 0;
}