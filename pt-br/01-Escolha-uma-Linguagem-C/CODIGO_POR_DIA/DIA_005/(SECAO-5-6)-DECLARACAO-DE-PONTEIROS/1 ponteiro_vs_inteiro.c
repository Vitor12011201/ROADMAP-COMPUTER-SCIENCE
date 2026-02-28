#include <stdio.h>

/**
 * A Armadilha da Declaração em Linha Única
 * Objetivo: Demonstrar que o '*' se liga à variável, não ao tipo.
 */

int main() {
    // Nesta linha, apenas 'p1' é ponteiro. 'v1' é um inteiro comum.
    int* p1, v1;

    p1 = &v1; // OK: p1 pode receber endereço
    v1 = 100; // OK: v1 guarda um número

    printf("--- Analise de Tipos ---\n");
    printf("Tamanho do p1 (ponteiro): %zu bytes\n", sizeof(p1));
    printf("Tamanho do v1 (inteiro):  %zu bytes\n", sizeof(v1));

    // Descomentar a linha abaixo causaria erro de compilação:
    // *v1 = 200; // Erro! v1 não é um ponteiro.

    return 0;
}