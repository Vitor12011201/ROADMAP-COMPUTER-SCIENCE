#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* OBJETIVO: Alocar memória com alinhamento específico (64 bytes)
   usando aligned_alloc. O tamanho alocado deve ser múltiplo do alinhamento.
   A memória retornada terá um endereço múltiplo de 64. */

int main() {
    int alinhamento = 64;          // potência de 2, maior que zero
    int tamanho = 256;             // 256 é múltiplo de 64 (64 * 4)
    char *buffer;

    // Aloca 256 bytes alinhados em fronteira de 64 bytes
    buffer = aligned_alloc(alinhamento, tamanho);

    if (buffer == NULL) {
        fprintf(stderr, "Erro: aligned_alloc falhou. Alinhamento %d, tamanho %d\n",
                alinhamento, tamanho);
        return 1;
    }

    // Verifica se o ponteiro realmente está alinhado
    if ((unsigned long)buffer % alinhamento == 0) {
        printf("Sucesso! Ponteiro %p está alinhado a %d bytes.\n",
               (void*)buffer, alinhamento);
    } else {
        printf("Aviso: ponteiro %p não está alinhado (mas deveria).\n", (void*)buffer);
    }

    // Usa a memória normalmente
    strcpy(buffer, "Dados alinhados com sucesso!");
    printf("Conteúdo: %s\n", buffer);

    free(buffer);
    buffer = NULL;
    return 0;
}