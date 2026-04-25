#include <stdio.h>

/* OBJETIVO: Usar typedef para simplificar a declaração de matrizes (arrays 2D).
   Isso ajuda a organizar dados que sempre possuem a mesma estrutura de colunas. */

typedef int LinhaTabuleiro[3];

int main() {
    // Um tabuleiro é um array de 3 'LinhaTabuleiro'
    LinhaTabuleiro jogo_da_velha[3] = {
        {1, 0, 1},
        {0, 1, 0},
        {1, 1, 0}
    };

    printf("Centro do tabuleiro: %d\n", jogo_da_velha[1][1]);
    return 0;
}