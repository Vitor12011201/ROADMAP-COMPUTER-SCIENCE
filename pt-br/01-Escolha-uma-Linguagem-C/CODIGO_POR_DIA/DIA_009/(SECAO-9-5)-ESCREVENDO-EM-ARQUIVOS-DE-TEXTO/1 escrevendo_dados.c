#include <stdio.h>

/* OBJETIVO: Usar o fprintf para gravar variaveis formatadas em um arquivo.
 * O fprintf funciona exatamente como o printf, mas envia o texto para o arquivo (fp).
 */

int main() {
    FILE *fp;
    int idade = 25;
    float altura = 1.75;

    // Abrimos no modo "w" (Write). Se o arquivo existia, ele eh limpo agora!
    fp = fopen("dados.txt", "w");

    if (fp == NULL) return 1;

    // Gravando texto misturado com variaveis
    fprintf(fp, "Idade: %d anos\n", idade);
    fprintf(fp, "Altura: %.2f metros\n", altura);

    fclose(fp); // Salva e fecha
    return 0;
}