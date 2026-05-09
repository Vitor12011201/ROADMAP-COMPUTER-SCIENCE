#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Alocar um array de inteiros com malloc usando multiplicação
   pelo tamanho do tipo. Acessar os elementos com índice de array (colchetes)
   e depois liberar a memória. */

int main() {
    int quantidade = 10;
    int *vetor;

    // Aloca espaço para 'quantidade' inteiros consecutivos na memória
    vetor = malloc(quantidade * sizeof(int));

    // Verificação obrigatória de falha na alocação
    if (vetor == NULL) {
        fprintf(stderr, "Erro fatal: Não foi possível alocar %d inteiros.\n", quantidade);
        return 1;
    }

    // Preenche o array: cada posição recebe i * 5
    for (int i = 0; i < quantidade; i++) {
        vetor[i] = i * 5;
    }

    // Exibe os valores armazenados
    printf("Array alocado dinamicamente:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // Libera a memória alocada
    free(vetor);
    vetor = NULL; // boa prática: evitar ponteiro pendente

    return 0;
}