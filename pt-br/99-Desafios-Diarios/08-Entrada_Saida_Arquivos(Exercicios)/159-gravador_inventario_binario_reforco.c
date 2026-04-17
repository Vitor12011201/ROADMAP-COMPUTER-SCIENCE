/*Objetivo: Praticar a gravação de um array de inteiros (IDs de peças) e a leitura total.
1. Crie um array int ids[5] = {101, 202, 303, 404, 505};.
2. Grave o array inteiro em pecas.bin usando um único fwrite.
3. Feche e reabra em "rb".
4. Crie um array vazio int lido[5];.
5. Use um único fread para puxar os 5 números de volta para o array lido.
6. Imprima o array lido com um for para conferir.*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int ids[5] = {101, 202 , 303, 404, 505};
    int lido[5];

    fp = fopen("pecas.bin", "wb");

    if (fp == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    fwrite(ids,sizeof(int), 5 , fp);

    fclose(fp);

    fp = fopen("pecas.bin" , "rb");

    if (fp == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    fread(&lido, sizeof(ids), 5 , fp);

    for (int i = 0; i < 5; i++)
    {
        printf("n_ID: %d\n", lido[i]);
    }

    fclose(fp);

    return 0;
}