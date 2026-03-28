#include <stdio.h>

/* OBJETIVO: Verificar se o arquivo existe antes de tentar usar.
 */

int main() {
    FILE *arq;

    // Tentamos abrir um arquivo que nao existe
    arq = fopen("arquivo_fantasma.txt", "r");

    // Se o C nao encontrar o arquivo, o ponteiro sera NULL (nulo)
    if (arq == NULL) {
        printf("Erro: O arquivo nao foi encontrado!\n");
    } else {
        printf("Arquivo aberto com sucesso!\n");
        fclose(arq);
    }

    return 0;
}