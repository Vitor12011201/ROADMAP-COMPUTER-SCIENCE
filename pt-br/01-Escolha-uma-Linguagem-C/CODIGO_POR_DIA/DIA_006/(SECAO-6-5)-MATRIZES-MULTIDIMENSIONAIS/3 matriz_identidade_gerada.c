#include <stdio.h>

/**
 * Matriz Identidade com Designated Initializers
 * Objetivo: Demonstrar a inicialização explícita de índices específicos
 * em uma matriz multidimensional.
 */

int main() {
    // Cria uma matriz 3x3 e define apenas a diagonal principal como 1
    // O resto será preenchido automaticamente com 0 pelo compilador.
    int identidade[3][3] = {
        [0][0] = 1,
        [1][1] = 1,
        [2][2] = 1
    };

    printf("--- Matriz Identidade 3x3 ---\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", identidade[i][j]);
        }
        printf("\n");
    }

    return 0;
}