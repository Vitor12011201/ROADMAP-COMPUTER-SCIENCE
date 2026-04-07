#include <stdio.h>

/* OBJETIVO: Gravar um array de bytes puras em um arquivo binario.
 * Usamos "wb" (Write Binary). O arquivo nao sera legivel no Bloco de Notas!
 */

int main() {
    FILE *fp;
    // unsigned char guarda valores de 0 a 255 (exatamente 1 byte)
    unsigned char dados[6] = {5, 37, 0, 88, 255, 12};

    fp = fopen("saida.bin", "wb");

    if (fp == NULL) return 1;

    /* fwrite(ponteiro_dos_dados, tamanho_de_cada_item, quantos_itens, arquivo)
     * Aqui: pegue 'dados', cada um tem tamanho de 1 char, sao 6 itens, mande para 'fp'.
     */
    fwrite(dados, sizeof(unsigned char), 6, fp);

    fclose(fp);
    printf("Arquivo binario gravado!\n");

    return 0;
}