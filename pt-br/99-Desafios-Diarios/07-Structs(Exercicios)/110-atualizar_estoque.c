/* Objetivo: Usar a seta para lógica de acumulação (soma) dentro de funções.
1. Crie uma struct Item com char *nome e int quantidade.
2. Crie uma função void adicionar_estoque(struct Item *i, int qtd_nova).
3. Dentro dela, use a seta para somar a qtd_nova ao valor que já existia na struct: i->quantidade += qtd_nova;.
4. No main, inicialize um item com 10 unidades, chame a função para adicionar mais 5 e imprima o novo total.*/

#include <stdio.h>

struct item
{
    char *nome;
    int quantidade;
};

void adicionar_estoque(struct item* i, int quantidade_nova)
{
    i->quantidade = i->quantidade + quantidade_nova;
}

int main()
{
    struct item placa_video = {.nome = "RTX 4060", .quantidade = 10};
    printf("Antes de repor o estoque do item [%s], a quantidade em estoque e de: [%d unidades]\n", placa_video.nome,
           placa_video.quantidade);
    printf("\n");
    adicionar_estoque(&placa_video, 5);
    printf("Depois de repor o estoque do item [%s], a quantidade em estoque e de: [%d unidades]\n", placa_video.nome,
           placa_video.quantidade);

    return 0;
}
