/*Objetivo: Criar um arquivo formatado que o Excel ou o Bloco de Notas consigam ler como tabela.
1. Crie um array de structs struct Produto { char nome[20]; int qtd; float preco; } com 3 itens.
2. Abra um arquivo relatorio.csv no modo "w".
3. Use um loop for para percorrer o array.
4. Use fprintf para salvar os dados separados por vírgula (ex: fprintf(fp, "%s,%d,%.2f\n", ...)).
5. Abra esse arquivo no seu computador (se tiver Excel ou Google Sheets, ele vai abrir como uma planilha!).*/

#include <stdio.h>

struct produtos
{
    char nome[20];
    int quantidade;
    float preco;
};

int main()
{
    struct produtos produto[3] = {
        {.nome = "Lapis" , .quantidade = 20 , .preco = 2.34},
        {.nome = "Canerno" , .quantidade = 15, .preco = 20.43},
        {.nome = "Caneta", .quantidade = 35, .preco = 5.34}
    };

    FILE *fp;

    fp = fopen("relatorio.csv" , "w");

    if (fp == NULL)
    {
        fprintf(stderr,"Esse aquivo nao existe\n");
        return 1;
    }

    fprintf(fp ,"Produto quantidade preco\n");

    for (int i = 0; i < 3; i++)
    {
        fprintf(fp,"%s %d %.2f\n", produto[i].nome , produto[i].quantidade, produto[i].preco);
    }

    fclose(fp);

    return 0;

}
