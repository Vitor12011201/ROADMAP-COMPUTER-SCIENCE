/*Objetivo: Contar ocorrências específicas. Você vai simular um caixa que precisa saber quantas unidades de um produto específico foram vendidas.
1. Crie o arquivo vendas.txt no modo de escrita.
2. Escreva 5 linhas com este padrão (Produto e Preço):
Pizza 45.00
Refri 10.00
Pizza 45.00
Pizza 45.00
Refri 10.00
3. Reabra o arquivo para leitura.
4. O programa deve percorrer o arquivo e contar apenas quantas vezes a palavra "Pizza" aparece.
5. No final, exiba: "Total de Pizzas vendidas: [quantidade]".*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char item[50];
    float preco = 0;
    int pizza_vendidas = 0;
    int refri_vendidos = 0;
    float novo_preco_pizza = 0;
    float novo_preco_refri = 0;

    fp = fopen("vendas.txt" , "w");

    if (fp == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    fprintf(fp, "Pizza 45.00\n");
    fprintf(fp, "Refri 10.00\n");
    fprintf(fp, "Pizza 45.00\n");
    fprintf(fp, "Pizza 45.00\n");
    fprintf(fp, "Refri 10.00\n");

    fclose(fp);

    fp = fopen("vendas.txt", "r");

    if (fp == NULL) {
        fprintf(stderr,"Erro ao abrir o arquivo\n");
        return 1;
    }

    while (fscanf(fp,"%s %f", item, &preco) != EOF) {
        if (strcmp(item, "Pizza") == 0) {
           pizza_vendidas++;
           novo_preco_pizza = preco + novo_preco_pizza;
        }
        if (strcmp(item, "Refri") == 0) {
            refri_vendidos++;
            novo_preco_refri = preco + novo_preco_refri;
        }
    }

    printf("Numero de Pizzas vendidas e de: [%d Pizzas], e o lucro total da venda de Pizzas e de: [%.2f]\n", pizza_vendidas, novo_preco_pizza);
    printf("Numero de Refris vendidos e de: [%d Refris], e o lucro total da venda de Refris e de: [%.2f]\n", refri_vendidos, novo_preco_refri);

    fclose(fp);

    return 0;

}