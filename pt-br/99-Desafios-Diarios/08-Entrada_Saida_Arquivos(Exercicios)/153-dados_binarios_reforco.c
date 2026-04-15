/*Objetivo: Praticar a abertura de arquivos no modo binário ("wb" e "rb") e entender como gravar um array de números inteiros pequenos (unsigned char) de uma só vez, e depois lê-los individualmente.
1. No seu código, crie um arquivo chamado dados.bin no modo de escrita binária ("wb").
2. Crie um array de 5 números: unsigned char valores[5] = {10, 20, 30, 40, 50};.
3. Use o fwrite para gravar esse array inteiro no arquivo.
Dica: fwrite(valores, sizeof(unsigned char), 5, fp);
4. Feche o arquivo.
5. Reabra o arquivo dados.bin no modo de leitura binária ("rb").
6. Use um loop while com o fread para ler um byte por vez e imprimir o valor numérico na tela.*/

#include <stdio.h>

int main() {

    FILE *fp;
    unsigned char valores[5] = {10 , 20 , 30 , 40 , 50};
    unsigned char c;

    fp = fopen("dados.bin", "wb");

    if (fp == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    fwrite(valores, sizeof(unsigned char), 5 , fp);

    fclose(fp);

    fp = fopen("dados.bin", "rb");

    if (fp == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    while (fread(&c, sizeof(unsigned char), 1, fp) != 0) {
        printf("Byte lido: %d\n" , c);
    }

    fclose(fp);

    return 0;

}

