#include <stdio.h>

/* OBJETIVO: Criar um apelido para tipos de ponto flutuante.
   Se o projeto precisar de mais precisão no futuro (mudar de float para double),
   basta alterar a linha do typedef uma única vez. */

typedef float nota_t;
// typedef double nota_t; // <- Bastaria descommentar aqui no futuro

int main() {
    nota_t prova1 = 8.5;
    nota_t prova2 = 7.0;
    nota_t media = (prova1 + prova2) / 2;

    printf("A média final é: %.1f\n", media);
    return 0;
}