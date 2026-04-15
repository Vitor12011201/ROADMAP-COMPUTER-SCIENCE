/*Objetivo: Entender que o binário grava o dado exatamente como ele é na memória. Vamos gravar um int (que geralmente ocupa 4 bytes) e ver como o arquivo se comporta.
1. No seu código, crie um arquivo chamado numero.bin no modo "wb".
2. Crie uma variável int n = 123456;.
3. Use o fwrite para gravar essa única variável.
Dica: fwrite(&n, sizeof(int), 1, fp);
4. e reabra em modo "rb".
5. Crie uma variável int lido = 0; (vazia).
6. Use o fread para ler o valor do arquivo e jogar dentro da variável lido.
7. Imprima o valor de lido para ver se o C recuperou o número 123456 corretamente.*/

#include <stdio.h>

int main() {

    FILE *fp;
    int n = 123456;
    int leitura;

    fp = fopen("numero.bin", "wb");

    if (fp == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    fwrite(&n,sizeof(int), 1 , fp);

    fclose(fp);

    fp = fopen("numero.bin", "rb");

    if (fp == NULL) {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    while (fread(&leitura, sizeof(int), 1 , fp) != 0) {
        printf("Numero que esta no int: %d\n", leitura);
    }

    fclose(fp);

    return 0;

}