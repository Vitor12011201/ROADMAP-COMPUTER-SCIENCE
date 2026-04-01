#include <stdio.h>

/* OBJETIVO: Ler todas as linhas de um arquivo ate o final (NULL).
 * O fgets retorna NULL quando nao ha mais nada para ler, sinalizando o fim.
 */

int main() {
    FILE *fp = fopen("citacao.txt", "r");
    char buffer[1024];
    int contador = 0;

    if (fp == NULL) return 1;

    // Enquanto o fgets conseguir ler algo (diferente de NULL)...
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        contador++;
        // Exibimos o numero da linha e o conteudo lido
        printf("Linha %d: %s", contador, buffer);
    }

    fclose(fp);
    return 0;
}