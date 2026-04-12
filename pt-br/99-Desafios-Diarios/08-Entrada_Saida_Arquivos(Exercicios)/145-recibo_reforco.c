/* Objetivo: Praticar a integração de strings e números em um único fluxo de escrita e leitura, garantindo que você consiga capturar dados diferentes (nome, quantidade e preço) de um arquivo de texto e usá-los para um cálculo matemático.
1. Instruções: No seu código, crie um arquivo chamado recibo.txt no modo de escrita.
2. Escreva dentro dele os dados de uma venda: o nome de um produto (ex: Monitor), a quantidade vendida (ex: 2) e o preço unitário (ex: 850.50).
3. Feche o arquivo para salvar os dados.
4. Reabra o mesmo arquivo recibo.txt no modo de leitura.
5. Use variáveis vazias para ler esses três dados do arquivo usando o fscanf.
6. Calcule o valor total da compra (Quantidade x Preço) e exiba na tela um resumo como este: "Produto: Monitor | Total: R$ 1701.00".*/

#include <stdio.h>

int main()
{

    FILE *fp;
    char produto[50];
    int quantidade;
    float preco;

    fp = fopen("recibo.txt" , "w");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir esse arquivo\n");
        return 1;
    }

    fprintf(fp, "Monitor 2 1250.3");

    fclose(fp);

    fp = fopen("recibo.txt", "r");

    if (fp == NULL)
    {
        fprintf(stderr,"Erro ao abrir esse arquivo");
        return 1;
    }

    fscanf(fp, "%s %d %f", produto , &quantidade, &preco);

    printf("Produto: %s\nQuantidade: %d\nPreco: %.2f\n", produto, quantidade, preco);
    printf("Produto: %s, Valor total da compra: %.2f\n", produto, quantidade * preco);

    fclose(fp);

    return 0;
}