/*Objetivo: Entender a lógica de funções como o qsort(), onde você decide como comparar os dados.
1. Crie uma estrutura struct Produto { char nome[20]; float preco; };.
2. Crie um array com 3 produtos (ex: "Caneta", 1.50; "Caderno", 20.00; "Lapis", 1.00).
3. Crie uma função de comparação estilo qsort: int comparar_produtos(const void *a, const void *b).
4. Dentro da função, converta a e b para const struct Produto *.
5. A função deve retornar 1 se o preço de a for maior que b, -1 se for menor, e 0 se forem iguais.
6. No main, chame a função qsort do C passando seu array de produtos e sua função de comparação.
7. Imprima os produtos ordenados pelo preço.*/

#include <stdio.h>
#include <stdlib.h>

struct Produto
{
    char nome[20];
    float preco;
};

int comparar_produtos(const void *a, const void *b)
{
    const struct Produto *p_1 = (const struct Produto *)a;
    const struct Produto *p_2 = (const struct Produto *)b;

    if (p_1->preco > p_2->preco)
    {
        return 1;
    }
    if (p_1->preco < p_2->preco)
    {
        return -1;
    }
    return 0;
}


int main()
{
    struct Produto produtos[3] = {
        {.nome = "Caneta", .preco = 1.50},
        {.nome = "Caderno", .preco = 20.00},
        {.nome = "Lapis", .preco = 1.00}
    };

    qsort(produtos, 3 , sizeof(struct Produto), comparar_produtos);

    printf("Produtos ordenados por preco:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s - R$ %.2f\n", produtos[i].nome , produtos[i].preco);
    }

    return 0;
}

