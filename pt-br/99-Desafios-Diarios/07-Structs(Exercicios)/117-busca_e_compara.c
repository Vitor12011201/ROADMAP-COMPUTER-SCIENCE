/* Objetivo: Encontrar uma struct específica dentro de um array.
1. Crie uma struct Produto com int id e float preco.
2. No main, crie um array de 3 produtos com IDs e preços à sua escolha.
3. Crie uma função int buscar_produto(struct Produto lista[], int tam, struct Produto alvo).
4. A função deve percorrer o array e comparar o id e o preco de cada item com o alvo.
5. Se encontrar um produto exatamente igual (mesmo ID e mesmo preço), retorne o índice. Se não, retorne -1.*/

#include <stdio.h>

struct Produto
{
    int id;
    float preco;
};

int buscar_produto(struct Produto lista[], int tamanho, struct Produto alvo)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (lista[i].id == alvo.id && lista[i].preco == alvo.preco)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    struct Produto produto_alvo = {0};

    struct Produto lista_produtos[3] = {
        {.id = 1234, .preco = 120.00},
        {.id = 4567, .preco = 60.00},
        {.id = 8910, .preco = 1400.00}
    };

    printf("Digite o ID do produto: \n");
    scanf("%d", &produto_alvo.id);
    printf("Digite o preco do produto: \n");
    scanf("%f", &produto_alvo.preco);

    int resultado = buscar_produto(lista_produtos, 3, produto_alvo);

    if (resultado == -1)
    {
        printf("Produto nao encontrado\n");
    }
    else
    {
        printf("O produto foi encontrado do indice [%d]\n", resultado);
    }

    return 0;
}
