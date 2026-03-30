#include <stdio.h>

/* OBJETIVO: Garantir que o programa nao trave se o arquivo nao existir.
 * Se o fopen falha, ele devolve NULL. Sempre cheque isso!
 */

int main() {
    FILE *fp;

    // Tentamos abrir um arquivo que talvez nao exista
    fp = fopen("arquivo_que_nao_existe.txt", "r");

    if (fp == NULL) {
        // Se for NULL, avisamos o usuario e paramos o programa
        printf("Erro: Nao consegui encontrar ou abrir o arquivo!\n");
        return 1;
    }

    printf("Arquivo aberto com sucesso!\n");
    fclose(fp);

    return 0;
}