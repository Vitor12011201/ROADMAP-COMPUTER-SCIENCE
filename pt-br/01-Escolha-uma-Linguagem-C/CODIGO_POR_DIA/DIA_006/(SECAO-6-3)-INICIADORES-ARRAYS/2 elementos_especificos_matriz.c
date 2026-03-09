#include <stdio.h>

int main() {
    // Definimos o índice 0, pulamos para o 4, e depois para o 9.
    // Note que o 88 vem logo após o 77 porque não definimos um índice para ele.
    int pontos[10] = {10, [4]=77, 88, [9]=999};

    printf("--- Tabela de Pontos ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao [%d]: %d pontos\n", i, pontos[i]);
    }
    return 0;
}