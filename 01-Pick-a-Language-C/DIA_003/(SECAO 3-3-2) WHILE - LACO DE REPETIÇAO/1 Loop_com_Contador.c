#include <stdio.h>

int main() {
    int i = 0; // 1. Começamos com zero

    // 2. A pergunta: "i ainda é menor que 10?"
    while (i < 10) {
        printf("i agora e %d!\n", i);

        i++; // 3. IMPORTANTE: Aumenta o i para que o loop um dia termine!
    }

    printf("Fim\n");
    return 0;
}