/*Objetivo: Praticar o acúmulo de valores lidos de um arquivo. Agora você não vai apenas procurar um item, você vai percorrer o arquivo inteiro e somar o valor de todos os produtos para dar um total geral.
1. Crie um arquivo chamado estoque.txt no modo de escrita.
2. Escreva três linhas nele, cada uma com um item e seu preço:
Mouse 50.00
Teclado 120.00
Monitor 900.00
3. Feche o arquivo.
4. Reabra o arquivo no modo de leitura.
5. Use um loop while para ler todos os itens e preços do arquivo.
6. Crie uma variável float total = 0; antes do loop. Dentro do loop, a cada leitura, some o preço lido a esse total.
7. Ao final, imprima o valor total de todos os itens somados.*/

#include <stdio.h>

int main()
{

    FILE *fp;
    char item[50];
    float preco;
    float total = 0;


    fp = fopen("estoque.txt" , "w");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    fprintf(fp, "Mouse 50.0\n");
    fprintf(fp,"Teclado 120.0\n");
    fprintf(fp, "Monitor 900.0\n");

    fclose(fp);

    fp = fopen("estoque.txt" , "r");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    printf("O total do itens: ");

    while (fscanf(fp,"%s %f" , item, &preco) != EOF)
    {
        printf("| %s |", item);
        total += preco;
    }

    printf("\nE de R$: %.2f\n" , total);

    fclose(fp);

    return 0;

}

