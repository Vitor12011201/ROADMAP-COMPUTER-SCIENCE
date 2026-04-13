/*Objetivo: Praticar a leitura seletiva. Você vai salvar dois produtos e tentar encontrar o preço de apenas um deles.
1. Crie um arquivo chamado precos.txt no modo de escrita.
2. Escreva duas linhas nele:
Cafe 15.50
Acucar 7.20
3. Feche o arquivo.
4. Reabra o arquivo precos.txt no modo de leitura.
5. Peça para o usuário digitar o nome de um produto (ex: Cafe).
6. Use um loop while com o fscanf para ler o arquivo linha por linha. Se o nome lido for igual ao que o usuário digitou, mostre o preço.*/

#include <stdio.h>
#include <string.h>

int main()
{

    FILE *fp;
    char produto[50];
    float preco;
    char produto_digitado[50];
    float preco_digitado;
    int encontrado = 0;

    fp = fopen("precos.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    fprintf(fp, "Cafe 15.50\n");
    fprintf(fp, "Acucar 7.20\n");

    fclose(fp);

    fp = fopen("precos.txt" , "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    printf("Digite o produto que quer procurar: \n");
    scanf("%s", produto_digitado);
    printf("Digite o preco do produto que quer procurar: \n");
    scanf("%f", &preco_digitado);


    while (fscanf(fp,"%s %f" , produto , &preco) != EOF)
    {
        if (strcmp(produto,produto_digitado) == 0 && preco == preco_digitado)
        {
            printf("O produto : %s existe e seu preco e: R$ %.2f\n", produto , preco);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
    {
        printf("O produto nao foi encontrado\n");
    }

    fclose(fp);

    return 0;

}