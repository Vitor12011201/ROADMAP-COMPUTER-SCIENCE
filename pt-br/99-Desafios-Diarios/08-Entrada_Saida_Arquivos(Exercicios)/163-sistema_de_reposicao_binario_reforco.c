/*Objetivo: Você tem um arquivo com o estoque atual. Sua missão é ler esse arquivo e criar um relatório de reposição apenas com os itens que estão acabando.
1. Crie uma struct Item com: char nome[30], int quantidade e float custo.
2. No main, crie um array com 4 itens:
- "Teclado", 15 unidades, R$ 50.00
- "Mouse", 3 unidades, R$ 25.00
- "Monitor", 2 unidades, R$ 600.00
- "Cabo HDMI", 20 unidades, R$ 15.00
3. Grave esse array no arquivo estoque.bin usando fwrite.
4. Reabra o arquivo para leitura ("rb").
5. Use um loop while (fread(...)) para percorrer o arquivo.
6. Se a quantidade do item for menor que 5, imprima na tela: [REPOSIÇÃO] O item %s está com estoque baixo (%d unidades)!.
7. Ao final, exiba o valor total investido no estoque (soma de quantidade * custo de todos os itens).*/

#include <stdio.h>

struct Item {
    char nome[30];
    int quantidade;
    float custo;
};

int main() {

    struct Item produtos[4] = {
        {.nome = "Teclado", .quantidade = 15, .custo = 50.00},
        {.nome = "Mouse", .quantidade = 3, .custo = 25.00},
        {.nome = "Monitor", .quantidade = 2, .custo = 600.00},
        {.nome = "Cabo HDMI", .quantidade = 20, .custo = 15.00}
    };

    struct Item temp = {0};

    FILE *fp;

    fp = fopen("estoque.bin", "wb");

    if (fp == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    fwrite(produtos, sizeof(struct Item), 4, fp);

    fclose(fp);

    fp = fopen("estoque.bin", "rb");

    if (fp == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo\n");
        return 1;
    }

    printf("--- RELATORIO DE AUDITORIA ---\n");

    while (fread(&temp, sizeof(struct Item), 1, fp) > 0) {

        if (temp.quantidade < 5) {
            printf("[REPOSICAO] O item %s esta com estoque baixo (%d unidades)!\n", temp.nome, temp.quantidade);
        }
        printf("Total de R$ em estoque do produto %s e de : R$: %.2f\n", temp.nome, (temp.quantidade * temp.custo));
    }

    fclose(fp);

    return 0;

}