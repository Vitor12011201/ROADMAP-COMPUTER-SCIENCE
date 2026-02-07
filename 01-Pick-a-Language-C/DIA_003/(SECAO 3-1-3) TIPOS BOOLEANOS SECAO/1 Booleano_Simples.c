#include <stdio.h>

int main() {
    int ligado = 1;  // 1 representa verdadeiro
    int erro = 0;    // 0 representa falso

    if (ligado) {
        printf("O sistema esta ligado!\n");
    }

    if (!erro) { // O "!" inverte: se não houver erro (se erro for 0)
        printf("Nenhum erro encontrado.\n");
    }

    return 0;
}