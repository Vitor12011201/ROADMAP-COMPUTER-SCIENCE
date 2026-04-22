#include <stdio.h>

/* OBJETIVO: Definir tipos específicos para contagem.
   Isso deixa claro que a variável não é apenas um 'int' qualquer,
   mas sim uma unidade de medida de quantidade. */

typedef unsigned int quantidade_t;

int main() {
    // Fica muito mais legível saber que a variável guarda uma quantidade
    quantidade_t estoque_carro = 15;
    quantidade_t estoque_moto = 30;

    printf("Total de itens no estoque: %u\n", estoque_carro + estoque_moto);
    return 0;
}