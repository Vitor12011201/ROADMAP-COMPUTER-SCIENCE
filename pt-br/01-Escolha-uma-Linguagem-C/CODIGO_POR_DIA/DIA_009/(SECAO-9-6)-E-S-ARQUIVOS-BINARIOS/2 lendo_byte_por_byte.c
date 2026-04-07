#include <stdio.h>

/* OBJETIVO: Ler um arquivo binario ("rb") e mostrar os valores numericos.
 * O fread devolve quantos itens ele conseguiu ler. Se for 0, o arquivo acabou.
 */

int main() {
    FILE *fp;
    unsigned char c;

    fp = fopen("saida.bin", "rb");

    if (fp == NULL) return 1;

    // Enquanto o fread conseguir ler 1 item de tamanho 'char'...
    while (fread(&c, sizeof(unsigned char), 1, fp) > 0) {
        printf("Valor lido: %d\n", c);
    }

    fclose(fp);
    return 0;
}