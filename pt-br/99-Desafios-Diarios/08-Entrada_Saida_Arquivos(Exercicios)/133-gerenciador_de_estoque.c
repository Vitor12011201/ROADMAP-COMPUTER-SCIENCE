/* Objetivo: Ler dados formatados de um arquivo e realizar cálculos.
1. Crie um arquivo estoque.txt com este formato: Nome Quantidade PrecoUnidade
Exemplo:
Teclado 10 150.50
Mouse 20 80.00
Monitor 5 1200.00
2. No seu código, use o fscanf dentro de um loop para ler cada linha.
3. Para cada item, calcule o Valor Total (Quantidade * Preco).
4. Imprima no console: Item: [Nome] | Valor em Estoque: R$ [Total].*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char produto[1024];
    int quantidade;
    float preco;

    fp = fopen("estoque.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Este arquivo nao existe\n");
        return 1;
    }

    fprintf(fp, "Teclado 10 150.00");
    fprintf(fp, "Mouse 20 80.00");
    fprintf(fp, "Monitor 5 1200.00 ");

    fclose(fp);

    fp = fopen("estoque.txt", "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Esse aquivo nao existe\n");
        return 1;
    }

    while (fscanf(fp, "%s %d %f", produto, &quantidade, &preco) != EOF)
    {
        printf("Produto: %s, Quantidade: %d, Preco: %.2f\n", produto, quantidade, preco);
        float total_estoque = quantidade * preco;
        printf("Total valor em estoque do produto [%s] e de R$: %.2f \n", produto,total_estoque);
        printf("\n");
    }

    fclose(fp);

    return 0;
}
