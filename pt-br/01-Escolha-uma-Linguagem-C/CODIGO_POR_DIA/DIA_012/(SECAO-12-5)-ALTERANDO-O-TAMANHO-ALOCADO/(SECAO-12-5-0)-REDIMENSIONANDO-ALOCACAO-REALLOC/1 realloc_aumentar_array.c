#include <stdio.h>
#include <stdlib.h>

/* OBJETIVO: Usar realloc para aumentar o tamanho de um array alocado
   dinamicamente. Mostrar a técnica de usar um ponteiro temporário
   para verificar falha antes de atribuir de volta ao ponteiro original. */

int main() {
    int tamanho_inicial = 5;
    int tamanho_novo = 10;
    int *vetor, *auxiliar;

    // Aloca array inicial com malloc
    vetor = malloc(tamanho_inicial * sizeof(int));
    if (vetor == NULL) {
        fprintf(stderr, "Erro fatal: Falha na alocação inicial.\n");
        return 1;
    }

    // Preenche os primeiros 5 elementos
    for (int i = 0; i < tamanho_inicial; i++) {
        vetor[i] = i * 2;
    }

    printf("Antes do realloc (tamanho %d):\n", tamanho_inicial);
    for (int i = 0; i < tamanho_inicial; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // Tenta aumentar o array para 10 inteiros
    // USO IMPORTANTE: guarda o retorno em um ponteiro temporário!
    auxiliar = realloc(vetor, tamanho_novo * sizeof(int));

    if (auxiliar == NULL) {
        fprintf(stderr, "Erro: Falha ao redimensionar o array.\n");
        free(vetor);      // Libera o original antes de sair
        vetor = NULL;
        return 1;
    }

    // Se chegou aqui, realloc funcionou
    vetor = auxiliar;     // Agora vetor aponta para o novo bloco (pode ser igual ou diferente)

    // Preenche os novos elementos (índices 5 a 9)
    for (int i = tamanho_inicial; i < tamanho_novo; i++) {
        vetor[i] = i * 3;
    }

    printf("\nDepois do realloc (tamanho %d):\n", tamanho_novo);
    for (int i = 0; i < tamanho_novo; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // Libera tudo
    free(vetor);
    vetor = NULL;

    return 0;
}