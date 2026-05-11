#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* OBJETIVO: Usar calloc para alocar um array de estruturas, garantindo
   que todos os campos (inclusive ponteiros) sejam inicializados com zero.
   Isso evita lixo de memória e ponteiros inválidos. */

// Estrutura que representa um produto
typedef struct {
    int codigo;
    float preco;
    char descricao[50];
    int *estoque_ptr;  // ponteiro (será NULL se calloc zerar)
} Produto;

int main() {
    int total_produtos = 4;
    Produto *produtos;

    // calloc zera todos os bytes: codigo=0, preco=0.0, estoque_ptr=NULL
    produtos = calloc(total_produtos, sizeof(Produto));

    if (produtos == NULL) {
        fprintf(stderr, "Erro fatal: Falha ao alocar %d produtos.\n", total_produtos);
        return 1;
    }

    // Como calloc já zerou, não precisamos inicializar cada campo manualmente
    printf("Produtos alocados com calloc (tudo zerado):\n");
    for (int i = 0; i < total_produtos; i++) {
        printf("Produto %d: codigo=%d, preco=%.2f, estoque_ptr=%p\n",
               i, produtos[i].codigo, produtos[i].preco, (void*)produtos[i].estoque_ptr);
    }

    // Agora podemos preencher apenas os que queremos
    produtos[0].codigo = 1001;
    produtos[0].preco = 19.90;
    strcpy(produtos[0].descricao, "Camiseta");

    produtos[1].codigo = 1002;
    produtos[1].preco = 49.90;
    strcpy(produtos[1].descricao, "Calça Jeans");

    printf("\nApós preencher alguns produtos:\n");
    printf("Produto 0: %s - Código %d - R$%.2f\n",
           produtos[0].descricao, produtos[0].codigo, produtos[0].preco);
    printf("Produto 1: %s - Código %d - R$%.2f\n",
           produtos[1].descricao, produtos[1].codigo, produtos[1].preco);

    // Libera memória
    free(produtos);
    produtos = NULL;

    return 0;
}