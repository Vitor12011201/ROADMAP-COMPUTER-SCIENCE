/*Objetivo: Praticar a desreferenciação "feia" (*p).campo para entender a lógica antes da seta.
1. Crie uma struct Livro com char *titulo e float preco.
2. Crie uma função void dar_desconto(struct Livro *l, float porcentagem).
3. Dentro da função, altere o preço usando a sintaxe de parênteses: (*l).preco = (*l).preco - ((*l).preco * porcentagem / 100);.
4. No main, use o & para passar o endereço do livro e verifique se o preço realmente mudou após a função.*/

#include <stdio.h>

struct livro
{
    char *nome;
    float preco;
};

void dar_desconto(struct livro* l, float porcentagem)
{
    (*l).preco = (*l).preco - ((*l).preco * porcentagem / 100);
}

int main()
{
    struct livro one_piece = {.nome = "One Piece", .preco = 33.99};

    printf("O valor atual do manga [%s] e: [%.2f]", one_piece.nome, one_piece.preco);
    printf("\n");
    dar_desconto(&one_piece, 20);
    printf("O valor do manga [%s] com desconto e: [%.2f]", one_piece.nome, one_piece.preco);

    return 0;
}
