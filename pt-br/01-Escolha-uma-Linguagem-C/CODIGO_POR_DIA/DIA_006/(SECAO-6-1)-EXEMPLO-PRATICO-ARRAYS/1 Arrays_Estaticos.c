#include <stdio.h>

/**
 * Objetivo: Demonstrar a declaração, inicialização e iteração
 * sobre um bloco fixo de memória.
 */

int main() {
    // 1. Declaração e Inicialização direta (mais profissional que uma por uma)
    float notas[4] = {7.5, 8.0, 9.2, 10.0};
    float soma = 0.0;
    int i;

    printf("--- Notas do Semestre ---\n");

    // 2. Percorrendo o array com um laço 'for'
    for (i = 0; i < 4; i++) {
        printf("Nota [%d]: %.1f\n", i, notas[i]);
        soma += notas[i]; // Somando para calcular a média
    }

    // 3. Calculando e exibindo a média
    printf("\nMedia Final: %.2f\n", soma / 4);

    return 0;
}