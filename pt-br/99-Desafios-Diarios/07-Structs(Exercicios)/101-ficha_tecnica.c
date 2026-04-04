/*Objetivo: Praticar a declaração global e o preenchimento manual de campos.
1. Declare uma struct Livro no escopo global (fora do main) com: char *titulo, char *autor e int paginas.
2. No main, declare a variável struct Livro meu_favorito;.
3. Atribua os valores usando o operador ponto (.).
4. Imprima os dados de forma organizada: "Livro: [titulo], Autor: [autor] ([paginas] pags)".*/

#include <stdio.h>

struct livro
{
    char* titulo;
    char* autor;
    int paginas;
};

int main()
{
    struct livro meu_favorito = {"One piece", "Eiichiro Oda", 120};

    printf("O meu livro favorito e: [%s]\n", meu_favorito.titulo);
    printf("O Autor desse livro e o: [%s]\n", meu_favorito.autor);
    printf("O numero de paginas desse livro e: [%d paginas]\n", meu_favorito.paginas);

    return 0;
}
