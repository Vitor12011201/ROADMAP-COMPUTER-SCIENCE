#include <stdio.h>

int main() {
    // Declaramos espaço para 5, mas só damos 2 valores
    int estoque[5] = {10, 25};

    printf("Faxina Automática:\n");
    for (int i = 0; i < 5; i++) {
        printf("Posicao [%d]: %d\n", i, estoque[i]);
    }
    // Resultado: 10, 25, 0, 0, 0
    return 0;
}