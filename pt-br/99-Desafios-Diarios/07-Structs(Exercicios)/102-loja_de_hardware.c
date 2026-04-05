/*Objetivo: Lidar com múltiplos itens do mesmo tipo de struct.
Crie uma struct Produto com char *nome, float preco e int estoque.
No main, declare duas variáveis: p1 e p2.
Preencha o p1 com um "Teclado" (R$ 150.00) e o p2 com um "Mouse" (R$ 80.00).
Calcule e imprima o valor total se você comprasse o estoque inteiro dos dois produtos somados.*/

#include <stdio.h>

struct produto
{
    char *nome;
    float preco;
    int estoque;
};

int main()
{
    struct produto p_1 = {"Teclado", 150.0, 10};
    struct produto p_2 = {"Mouse", 80.0, 15};

    printf("O produto p_1 tem nome: [%s], o preco dele e: [%.2f], essa e a quantidade no estoque desse produto [%d]\n",
           p_1.nome, p_1.preco, p_1.estoque);
    printf("O produto p_2 tem nome: [%s], o preco dele e: [%.2f], essa e a quantidade no estoque desse produto [%d]\n",
           p_2.nome, p_2.preco, p_2.estoque);
    printf("Existe o valor de R$: %.2f, no estoque de [%s]\n", p_1.preco * p_1.estoque, p_1.nome);
    printf("Existe o valor de R$: %.2f, no estoque de [%s]\n", p_2.preco * p_2.estoque, p_2.nome);

    return 0;
}
